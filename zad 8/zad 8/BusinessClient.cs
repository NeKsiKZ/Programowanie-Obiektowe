public class BusinessClient : Client
{
    public BusinessClient(int id, string name) : base(id, name) { }

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
