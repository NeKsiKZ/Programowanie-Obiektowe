public class SavingsAccount : IAccount
{
    public decimal Balance { get; set; }

    public SavingsAccount(decimal balance)
    {
        Balance = balance;
    }

    public decimal GetBalance()
    {
        return Balance;
    }
}
