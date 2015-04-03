#include<iostream>
using namespace std ;
inline int fibonacci(int n)
{
if(n==1)
	return 0;
else if(n==2)
	return 1;
else 
	return (fibonacci(n-1)+fibonacci(n-2));
}
int main()
{
	int n;
	cin>>n ;
        int out=fibonacci(n);
	cout<<out<<endl;
	return 0;
}
