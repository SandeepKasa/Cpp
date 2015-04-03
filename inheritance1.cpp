// SINGLE INHERITANCE //
#include<iostream>
using namespace std;
class employee
{
	private:
		char ename[20];
		int empno ;
	public:
		void accept() 
		{
			cout<<"Enter the employee number: " ;
			cin>>empno ;
			cout<<"Enter employee name: " ;
			cin>>ws ;
			cin.get(ename,20);
		}
		void display() 
		{
			cout<<"Employee number is: "<<empno<<endl ;
			cout<<"Employee name is: "<<ename<<endl ;
		}
};
class manager : public employee
{
	private:
		int subords ;
	public:
		void accept() //method over-riding //
		{
			employee :: accept() ;
			cout<<"Enter number of subords: " ;
			cin>>subords ;
		}
		void display() //method over-riding //
		{
			employee :: display() ;
			cout<<"No of subords are: "<<subords<<endl ;
		}

};
int main()
{
	manager m;
	m.accept() ;
	m.display() ;
	return 0;
}
