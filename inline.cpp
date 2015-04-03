#include<iostream>
using namespace std;
inline double simple(int p,int t,int r)
{
	return p*t*r/100.00 ;
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int d=simple(a,b,c);
        cout<<d<<endl ;
	return 0;
}
