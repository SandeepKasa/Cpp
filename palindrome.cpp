#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
                int temp=n;
		int sum=0;
		          while(n>0)
			  {
				int rem=n%10;
				n=n/10;
				sum=(sum*10)+rem;
                            }
			  if(temp==sum)
			  {
				  cout<<"Palindrome "<<endl ;
			  }
			  else
				  cout<<"Not a Palindrome "<<endl ;
	}
	return 0;

}
