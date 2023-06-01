#include "pch.h"
#include "../Bank/Account.cpp"

using namespace std;

class AccountFixture : public testing::Test
{
public:
	Account account{ 10000 };
};

TEST_F(AccountFixture, CreateAccountInit10000Won) {
	EXPECT_EQ(10000, account.getBalance());
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(5000);
	EXPECT_EQ(15000, account.getBalance());
}

TEST_F(AccountFixture, Withdraw) {
	account.Withdraw(5000);
	EXPECT_EQ(5000, account.getBalance());
}