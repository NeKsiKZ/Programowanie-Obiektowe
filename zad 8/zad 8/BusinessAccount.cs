public class BusinessAccount : IAccount
{
    public decimal Balance { get; set; }

    public BusinessAccount(decimal balance)
    {
        Balance = balance;
    }

    public decimal GetBalance()
    {
        return Balance;
    }
}
