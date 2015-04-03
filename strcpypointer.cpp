#include<iostream>
#include<string.h>
using namespace std;
void strcpy(char *ptr1,char *ptr2)
{
	int i;
	while((*ptr2)!='\0')
	{
	      *ptr1=*ptr2;
	      ptr1++;
	      ptr2++;
	}
}
void strcpy(char *ptr1,char *ptr2,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		*(ptr1+i)=*(ptr2+i);
	}
}
int main()
	{
		char s[1000],t[1000],r[1000];
		int n;
		cin>>n;
		cin>>s>>t;
               // strcpy(r,s);
               // strcpy(s,t);
		strcpy(s,t);
		cout<<s<<endl;
		return 0;
	}
