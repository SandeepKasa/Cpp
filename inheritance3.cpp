// MULTI-LEVEL INHERITANCE //
#include<iostream>
using namespace std;
class person
{
	private:
		int age;
		char name[10];
        public:
		void accept()
		{
			cout<<"Enter the age: " ;
			cin>>age ;
			cout<<"Enter the name: ";
			cin>>ws ;
			cin.get(name,10);
		}
		void display()
		{
			cout<<"Age: "<<age<<endl ;
			cout<<"Name: "<<name<<endl ;
		}
};
class student : public person
{
	private:
		int sno;
		char course[50] ;
	public:
		void accept()   // Method overriding //
              {
			person :: accept() ;
			cout<<"Enter sno: " ;
			cin>>sno ;
			cout<<"Enter course: " ;
			cin>>ws ;
			cin.get(course,50);
		}
		void display() // Method overriding //

                {
			person :: display() ; 
			cout<<"Sno is: "<<sno<<endl ;
			cout<<"Course is: "<<course<<endl ;
		}
};
class exam : public student
{
	private:
		int m1,m2,m3 ;
	public:
		void accept()
		{
			student :: accept();
			cout<<"Enter marks of all the three subjects: ";
			cin>>m1>>m2>>m3 ;
		}
		void display()
		{
			student :: display() ;
			cout<<"M1= "<<m1<<endl ;
			cout<<"M2= "<<m2<<endl ;
			cout<<"M3= "<<m3<<endl ;
		}
};
int main()
{
	exam e;
	e.accept();
	e.display();
	return 0;
}

