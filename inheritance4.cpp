// MULTIPLE INHERITANCE //
#include<iostream>
using namespace std;
class a
{
	protected:
		int x;
	public:
		a()
		{
			x=100;
			cout<<"a()"<<endl ;
		}
		void show()
		{
			cout<<x<<endl ;
		}
};
class b
{
	protected :
		int y;
	public:
		b()
		{
			y=200 ;
			cout<<"b()"<<endl ;
		}
		void show()
		{
			cout<<y<<endl ;
		}
};
class c : public a , public b
{
	private: 
		int z;
	public:
		c()
		{
			z=300;
			cout<<"c()"<<endl ;
		}
		void show() // member over-riding //
		{
			a :: show() ;
			b :: show() ;
			cout<<z<<endl ;
			cout<<"Total: "<<x+y+z<<endl ;
		}
};
int main()
{
	c obj;
	obj.show();
	return 0;
}
