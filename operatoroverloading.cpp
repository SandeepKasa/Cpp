#include<iostream>
#include<math.h>
using namespace std;
/*num boolean 
{
	false;true;
};*/
class complex
{
	private:
		double rp;
		double ip;
	public:
		void init(double rp=0 , double ip=0)
		{
			this->rp=rp;
			this->ip=ip;
		}
		void accept()
		{
			cout<<"Enter values: " ;
			cin>>rp>>ip ;
		}
		void display()
		{
			cout<<rp<<(ip>0?"+":"-")<<fabs(ip)<<"i"<<endl ;
		}
		complex operator + (complex c)
		{
			complex temp;
			temp.rp=c.rp + rp ;
			temp.ip=c.ip + ip ;
			return temp;
		}
		int operator == (complex c)
		{
			if(rp==c.rp && ip==c.ip)
				return 1;
			else
				return 0;
		}
	/*	boolean operator ==(complex c)
		{
			return(rp==c.rp && ip==c.ip);
		}*/

		complex operator * (complex c)
		{
			complex temp;
			temp.rp=(rp*c.rp)-(ip*c.ip);
			temp.ip=(rp*c.ip)+(ip*c.rp);
			return temp;
		}
};
int main()
{
	complex c1,c2;
	c1.accept();
	c2.accept();
	c1.display();
	c2.display();
	complex c=c1 + c2 ;
        c.display();
	if(c1==c2)
		cout<<"Equal"<<endl ;
	else 
		cout<<"Not Equal"<<endl ;
	complex c3=c1*c2 ;
	c3.display();
	return 0;
}
