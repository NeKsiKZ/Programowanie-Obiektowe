using System.Collections.Generic;

public abstract class Client
{
    public int Id { get; set; }
    public string Name { get; set; }
    public List<IAccount> Accounts { get; set; }

    public Client(int id, string name)
    {
        Id = id;
        Name = name;
        Accounts = new List<IAccount>();
    }

    public abstract decimal GetTotalBalance();
}
