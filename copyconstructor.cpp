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
 vector(int n);
  ~vector();
  vector(vector& v);
  void accept();
 void display();
 void increase();
};
 vector :: vector(int n)
{
	size=n;
	ptr=new int(size);
}
vector :: ~vector()
{
	delete [] ptr;
}
vector :: vector(vector& v)
{
	size=v.size ;
	for(int i=0;i<size;i++)
	{
		ptr[i]=v.ptr[i] ;
	}
}
void vector :: accept()
{
	cout<<"Enter values: " ;
	for(int i=0;i<size;i++)
	cin>>ptr[i] ;
}
void vector :: display()
{
	cout<<"Values are: " ;
	for(int i=0;i<size;i++)
	cout<<ptr[i]<<" " ;
	cout<<endl ;
}
void vector :: increase()
{
	for(int i=0;i<size;i++)
		ptr[i]++ ;
}
 int main()
{
	int m;
	cout<<"Enter no. of cells: " ;
	cin>>m;
	vector v(m);
	v.accept();
	v.display();
	vector v1=v;
	v1.display();
	v1.increase();
	v1.display();
	v.display();
	return 0;
}
