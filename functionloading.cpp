#include<iostream>
using namespace std;
void show(int x)
{
	cout<<x<<endl;
}
void show(double x)
{
	cout<<x<<endl;
}
void show(char *x)
{
	cout<<x<<endl;
}
int main()
{
	show(10);
	show(8.9);
	show("sandy");
	return 0;
}
