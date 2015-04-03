#include<iostream>
#include<string.h>
using namespace std;
void strcpy(char s[],char t[])
{
	int n=strlen(t);
	int i;
	for(i=0;i<n;i++)
	{
		s[i]=t[i];
	}
	cout<<s<<endl;
}
void strcpy(char s[],char t[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		s[i]=t[i];
	}
	cout<<s<<endl;
}
int main()
	{
		char s[1000],t[1000],r[1000];
		int n;
		cin>>n;
		cin>>s>>t;
                strcpy(r,s);
                strcpy(s,t);
		strcpy(r,t,n);
		return 0;
	}
