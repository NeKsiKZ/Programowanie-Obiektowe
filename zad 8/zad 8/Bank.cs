using System;
using System.Collections.Generic;


public class Bank
{
    private List<Client> clients;

    public Bank()
    {
        clients = new List<Client>();
    }

    public void AddClient(Client client)
    {
        clients.Add(client);
    }

    public void AddAccountToClient(int clientId, IAccount account)
    {
        Client client = clients.Find(c => c.Id == clientId);
        if (client != null)
        {
            client.Accounts.Add(account);
        }
    }

    public decimal GetTotalBalanceOfBusinessClients()
    {
        decimal totalBalance = 0;
        foreach (Client client in clients)
        {
            if (client is BusinessClient)
            {
                totalBalance += client.GetTotalBalance();
            }
        }
        return totalBalance;
    }

    public decimal GetTotalBalanceOfIndividualClients()
    {
        decimal totalBalance = 0;
        foreach (Client client in clients)
        {
            if (client is IndividualClient)
            {
                totalBalance += client.GetTotalBalance();
            }
        }
        return totalBalance;
    }

    public decimal GetTotalBalanceOfImportantClients()
    {
        decimal totalBalance = 0;
        foreach (Client client in clients)
        {
            if ((client is BusinessClient && !(client is IndividualClient)) || (client is IndividualClient && ((IndividualClient)client).IsImportant))
            {
                totalBalance += client.GetTotalBalance();
            }
        }
        return totalBalance;
    }

    public decimal GetTotalBalanceOfOrdinaryIndividuals()
    {
        decimal totalBalance = 0;
        foreach (Client client in clients)
        {
            if (client is IndividualClient && !((IndividualClient)client).IsImportant)
            {
                totalBalance += client.GetTotalBalance();
            }
        }
        return totalBalance;
    }
}
