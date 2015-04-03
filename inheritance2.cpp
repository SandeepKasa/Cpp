// HIERARCHY INHERITANCE //
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

class scientist : public employee
{
	private:
		int papers;
		int awards;
	public:
		void accept()
		{
			employee :: accept() ;
			cout<<"Enter no.of papers: " ;
			cin>>papers ;
			cout<<"Enter no. of awards: " ;
			cin>>awards ;
		}
		void display()
		{
			employee :: display() ;
			cout<<"The no. of papers are: "<<papers<<endl ;
			cout<<"The no. of awards are: "<<awards<<endl ;
		}
};

class labour : public employee
{
	// Dummy class( empty class or stub) //
};
int main()
{
	manager m;
	m.accept() ;
	m.display() ;
	scientist s;
	s.accept();
	s.display();
	labour l;
	l.accept();
	l.display();
	return 0;
}
