#include<iostream>
using namespace std;
class date
{
	private:
		int dd;
		int mm;
		int yy;
	public:
		date(int,int,int);
		void accept();
		void display();
		date operator -(int) ;
		date operator -=(int);
		date operator --();
		date operator --(int);
		int  operator >(date ) ;
		int  operator ==(date );
};
  static int maxdays[] = {31,28,31,30,31,30,31,31,30,31,30,31} ;
    date :: date(int dd=0 , int mm=0 , int yy=0)
{
	this->dd=dd;
	this->mm=mm;
	this->yy=yy;
}
   void date :: accept()
{
	cout<<"Enter date: ";
	cin>>dd>>mm>>yy ;
}
  void date :: display()
{
	cout<<"Date is : ";
	cout<<dd<<"/"<<mm<<"/"<<yy ;
}
 date date :: operator -(int n)
	{
                date dt = *this;
 if(((dt.yy%100==0)&&(dt.yy%400==0)) || (((dt.yy%100)!=0)&&(dt.yy%4==0)))
{
	maxdays[1]=29 ;
}		
                n=dt.dd-n ;
		while(n<=0)
		{
			n=n+maxdays[dt.mm-2];
			if(dt.mm--==0)
			{
				dt.mm=12;
				dt.yy--;
			}
		}
			dt.dd=n;
			return dt;
	}
date date :: operator -= (int n)
{
	*this=*this-n;
	return *this;
}
date date :: operator --()
{
	*this=*this-1;
	return *this;
}
date date :: operator --(int)
{
	date dt=*this;
	*this=*this-1;
	return dt;
}
int date :: operator ==(date d)
{
	return(this->yy==d.yy & this->mm==d.mm & this->dd==d.dd) ;
}
int date :: operator >(date d)
{
	if(this->yy == d.yy)
	{
		if(this->mm == d.mm)
		{
			if(this->dd == d.dd)
				return this->dd > d.dd ;
			return this->mm > d.mm ;
		}
		return this->yy > d.yy ;
	}
}
  int main()
{
	date d1,d2;
	int n;
	d1.accept();
	d1.display();
	cout<<endl;
	cout<<"Enter the decrement no. : " ;
	cin>>n ;
	d2=d1-n ;
	d2.display();
	cout<<endl;
	d2-=3;
	d2.display();
	cout<<endl;
	--d2;
	d2.display();
	cout<<endl;
	d2--;
	d2.display();
	cout<<endl;
	if(d1==d2)
		cout<<"Equal " ;
     else
     {
	  	     d1.display();
		     if(d1>d2)
		     cout<<" is greater than " ;
		     else
			     cout<<" is less than " ;
		     d2.display();
		     cout<<endl;
     }

	return 0;
}

