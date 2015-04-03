#include<iostream>
#include<string.h>
using namespace std;
class account
{
	private:
		int accno ;
		char aholdname[20] ;
                double balance ;
                static int minbalance;
        public:
		void init(int accno , char aholdname[20] ,double balance)
		{
			this->accno=accno ;
			strcpy((this->aholdname),aholdname);
			this->balance=balance ;
		}
		void display()
		{
			cout<<"Account number: "<<accno<<"\t"<<"Account Holder name: "<<aholdname<<"\t"<<"Balance: "<<balance<<endl;
		}
               	static void acceptminbalance()
                {
			cout<<"Enter min-balance: " ;
			cin>>minbalance ;
		}
		void deposit(int deposit)
		{
			balance=balance+deposit ;
                }
		void withdrawal(int withdrawal)
		{
			balance=balance-withdrawal;
			if(balance<minbalance)
			{
				cout<<"Withdrawal not possible"<<endl ;
				balance=balance+withdrawal;
			}
		
		}
		 account fundtransfer(account acc,double transfer)
		{

                   	
			balance=balance-transfer;
			acc.balance=acc.balance+transfer;
			return acc ;
                        
		}

};
               
            int account :: minbalance ;

	    int main()
{
	int t;
	cout<<"Enter the number of testcases: " ;
	cin>>t;
	while(t--)
	{
        account :: acceptminbalance() ;
	account a1,a2;
	a1.init(1,"kasa",10000) ;
	a2.init(2,"sandy",20000) ;
	a1.display() ;
	a2.display() ;
	double deposit;
	cout<<"Enter deposit amount: " ;
	cin>>deposit ;
        a1.deposit(deposit);
	a2.deposit(deposit);
	cout<<"Enter withdrawal amount: ";
	double withdrawal ;
	cin>>withdrawal ;
	a1.withdrawal(withdrawal);
	a2.withdrawal(withdrawal);
	cout<<"Enter transfer amount: " ;
	double transfer ;
	cin>>transfer ;
	a2=a1.fundtransfer(a2,transfer);
	a1.display();
	a2.display();
	}
	return 0;
}
