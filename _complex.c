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
		void init(double ,double );
		void accept();
		void display();
                complex operator +(complex );
		complex operator -(complex );
		complex operator *(complex );
		int operator ==(complex );

	friend istream& operator >>(istream& ,complex& );
	friend ostream& operator <<(ostream& ,complex& );
};
void complex :: init(double rp=0 , double ip=0)
{
	this->rp=rp;
	this->ip=ip;
}
void complex :: accept()
{
	cout<<"Enter values: " ;
	cin>>rp>>ip ;
}
void complex :: display()
{
	cout<<rp<<(ip>0?"+":"-")<<fabs(ip)<<"i"<<endl ;
}

istream& operator >>(istream& in,complex& c)
{
	cout<<"Enter real part: ";
	in>>c.rp ;
	cout<<"Enter imaginary part: ";
	in>>c.ip ;
	return in ;
}
ostream& operator <<(ostream& out,complex& c)
{
	out<<"complex number: "<<c.rp ;
	if(c.ip>0)
		out<<"+";
	else
		out<<"-";
	out<<fabs(c.ip)<<"i"<<endl ;
	return out;
}

complex complex :: operator +(complex c)
{
	complex temp;
	temp.rp=c.rp + rp ;
	temp.ip=c.ip + ip ;
	return temp;
}
complex complex :: operator -(complex c)
{
	complex temp;
	temp.rp=rp - c.rp;
	temp.ip=ip - c.ip;
	return temp;
}
int complex :: operator ==(complex c)
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

complex complex :: operator *(complex c)
{
	complex temp;
	temp.rp=(rp*c.rp)-(ip*c.ip);
	temp.ip=(rp*c.ip)+(ip*c.rp);
	return temp;
}
int main()
{
	complex c1,c2;
	cin>>c1>>c2;
/*	c1.accept
	c2.accept();
	c1.display();
	c2.display();*/
	complex c=c1 + c2 ;
//	c.display();
	cout<<c ;
	complex c3=c1-c2;
	cout<<c3;
	if(c1==c2)
		cout<<"Equal"<<endl ;
	else 
		cout<<"Not Equal"<<endl ;
	complex c4=c1*c2 ;
//	c3.display();
	cout<<c4;
	return 0;
}
