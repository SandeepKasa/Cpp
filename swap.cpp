#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i;
		int a[10000];
		for(i=0;i<n;i++)
			cin>>a[i] ;
		for(i=0;i<n-1;i++)
		{
			int j;
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					int temp;
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
  		      }
			}
		}
		for(i=0;i<n;i++)
		 cout<<a[i]<<" ";
		cout<<endl ;
	}
	return 0;
}
