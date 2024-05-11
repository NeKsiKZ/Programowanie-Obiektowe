using System;

class Program
{
    static void Main(string[] args)
    {
        
        Bank bank = new Bank();

        
        bank.AddClient(new BusinessClient(1, "Firma1"));
        bank.AddClient(new BusinessClient(2, "Firma2"));
        bank.AddClient(new IndividualClient(3, "Osoba1", true));
        bank.AddClient(new IndividualClient(4, "Osoba2", false));
        bank.AddClient(new IndividualClient(5, "Osoba3", true));

        bank.AddAccountToClient(1, new BusinessAccount(10000));
        bank.AddAccountToClient(2, new BusinessAccount(20000));
        bank.AddAccountToClient(3, new SavingsAccount(5000));
        bank.AddAccountToClient(3, new PersonalAccount(3000));
        bank.AddAccountToClient(4, new PersonalAccount(4000));
        bank.AddAccountToClient(5, new PersonalAccount(6000));

        Console.WriteLine("Łączne środki na kontach firm:");
        Console.WriteLine(bank.GetTotalBalanceOfBusinessClients());

        Console.WriteLine("\nŁączne środki na kontach osób fizycznych:");
        Console.WriteLine(bank.GetTotalBalanceOfIndividualClients());

        Console.WriteLine("\nŁączne środki na kontach dużych firm i ważnych osób:");
        Console.WriteLine(bank.GetTotalBalanceOfImportantClients());

        Console.WriteLine("\nŁączne środki na kontach zwykłych osób:");
        Console.WriteLine(bank.GetTotalBalanceOfOrdinaryIndividuals());
    }
}
