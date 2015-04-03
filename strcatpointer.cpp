#include<iostream>
using namespace std;
void strcat(char *dest,char *src)
{
	while((*dest)!='\0')
	{
		*dest++;
	}
	while((*src)!='\0')
	{
		*dest=*src;
		*dest++;
		*src++;
	}
}
void strcat(char *dest,char *src,int n)
{
        while((*dest)!='\0')
	{
		*dest++;
         }
	int i;
	for(i=0;i<n;i++)
	{
		*(dest+i)=*(src+i);
	}
}
int main()
{
	char s[1000],t[1000];
	int n;
	cin>>n;
	cin>>s>>t;
	strcat(s,t,n);
	cout<<s<<endl;
	return 0;
}
