class Account
{
public:
	explicit Account(int balance) : balance(balance)
	{

	}
	int getBalance()
	{
		return balance;
	}

	void deposit(int money)
	{
		balance += money;
	}

	void Withdraw(int money)
	{
		if (money > balance)
			balance = 0;
		balance -= money;
	}

	void addCompoundInterest()
	{
		balance += balance * compundInterestRatio;
	}

	void setCompoundInteresetValue(const double newRatio)
	{
		compundInterestRatio = newRatio;
	}

	int calculateNYearCompundInterestResult(int n)
	{
		int result = balance;
		for (int i = 0; i < n; i++)
		{
			result += result * compundInterestRatio;
		}
		return result;
	}

private:
	int balance;
	double compundInterestRatio = 0.05;
};