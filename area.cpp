#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter length and breadth:" ;
	int l,b;
	cin>>l>>b;
	int a=l*b;
	int p=2*(l+b);
	cout<<"Area: "<<a<<endl;
	cout<<"Perimeter: "<<p<<endl;
	return 0;
}
