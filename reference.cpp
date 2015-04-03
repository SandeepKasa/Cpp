#include<iostream>
using namespace std;
int main()
{
	int a=1,b=2,c=3;
	int& d=a;
	cout<<a<<b<<c<<d<<endl;
	d=b;
	cout<<a<<b<<c<<d<<endl;
	d=c;
	cout<<a<<b<<c<<d<<endl;
	return 0;
}
