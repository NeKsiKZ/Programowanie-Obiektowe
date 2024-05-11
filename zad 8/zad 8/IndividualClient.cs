public class IndividualClient : Client
{
    public bool IsImportant { get; set; }

    public IndividualClient(int id, string name, bool isImportant) : base(id, name)
    {
        IsImportant = isImportant;
    }

    public override decimal GetTotalBalance()
    {
        decimal totalBalance = 0;
        foreach (IAccount account in Accounts)
        {
            totalBalance += account.GetBalance();
        }
        return totalBalance;
    }
}
