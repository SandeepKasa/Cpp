#include<iostream>
using namespace std;
class employee
{
	private:
	int empno;
	char ename[20];
	int sal;
	public:
	void accept()
	{
		cout<<"Enter employeeno:";
		cin>>empno;
		cout<<"Enter employee name:";
		cin>>ws;
		cin.get(ename,20);
	//	cin>>ename;
		cout<<"Enter salary:";
		cin>>sal;
	}
	void display()
	{
		cout<<"Employee number is: "<<empno<<endl;
		cout<<"Employee name is: "<<ename<<endl;
		cout<<"Employee salary is: "<<sal<<endl;
        }
};
int main()
{
	employee e;
	e.accept();
	e.display();
	return 0;
}
