#include<iostream>
using namespace std;
inline void swap1(int x,int y)
{
	int t=x;
	x=y;
	y=t;
}
inline void swap2(int *x,int *y)
{
	int t=*x;
	*x=*y;
	*y=t;
}
inline void swap3(int& x,int& y)
{
	int t=x;
	x=y;
	y=t;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int x=a;
	int y=b;
	swap1(a,b);
	cout<<a<<" "<<b<<endl;
	swap2(&a,&b);
	cout<<a<<" "<<b<<endl;
	swap3(x,y);
	cout<<x<<" "<<y<<endl;
	return 0;
}
