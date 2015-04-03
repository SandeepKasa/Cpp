#include<iostream>
#include<math.h>
//#include<conio.h>
//#include<compleks.h>
using namespace std ;
class complex
{
	private:
		double rp;
		double ip;
		friend istream& operator >>(istream& in,complex& c) ;
		friend ostream& operator <<(ostream& out,complex& c) ;
};
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


int main()
{
	complex a,b;
	cin>>a>>b;
	cout<<a<<b ;
	return 0;
}
