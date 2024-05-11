public class PersonalAccount : IAccount
{
    public decimal Balance { get; set; }

    public PersonalAccount(decimal balance)
    {
        Balance = balance;
    }

    public decimal GetBalance()
    {
        return Balance;
    }
}
