#include<iostream>
using namespace std;
void print(int a=10,double b=6.9,char *ptr="sandeep")
{
	cout<<a<<" "<<b<<" "<<ptr<<endl ;
}
int main()
{
	int x=100;
	double y=10.7;
	char *z="kasa";
	print(x,y,z);
	print(x,y);
	print(x);
	print();
	return 0;
}
