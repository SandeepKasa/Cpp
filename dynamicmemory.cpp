#include<iostream>
#include<new>
#include<string.h>
using namespace std;
class vector
{
	private:
	int *ptr;
	int size;
	public:
 vector(int n)
{
	size=n;
        ptr=new int[size];
}
  ~vector()
{
	delete [] ptr ;
}
  void accept()
{
	cout<<"Enter values: ";
	for(int i=0;i<size;i++)
	{
		cin>>ptr[i];
	}
}
 void display()
{
	cout<<"Values in vector: "<<endl ;
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i]<<endl ;
	}
}
};
 int main()
{
	int m;
	cout<<"Enter no. of cells: " ;
	cin>>m;
	vector v(m);
	v.accept();
	v.display();
	return 0;
}
