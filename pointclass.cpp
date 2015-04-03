#include<iostream>
using namespace std;
#include<math.h>
class point
{
	private:
		double x;
		double y;
	public:
		void init()
		{
			x=0;
			y=0;
		}
		void init(double a)
		{
			x=a;
			y=0;
		}
		void init(double a,double b)
		{
			x=a;
			y=b;
		}
		void accept()
		{
			cout<<"Enter point"<<endl;
			cin>>x>>y;
		}
		void display()
		{
                        cout<<"The given point is: "<<endl;
			cout<<"("<<x<<","<<y<<")"<<endl ;
		}
		double distance(point p)
		{
			return sqrt((x-p.x)*(x-p.x)+((y-p.y)*(y-p.y))) ;
		}
		point midpoint(point p)
		{
			point temp;
			temp.x=(x+p.x)/2;
			temp.y=(y+p.y)/2;
			return temp;
		}
		double slope(point p)
		{
			return (p.x-x)/(p.y-y) ;
		}
		double area(point p,point q) 
		{
			return fabs(((x*(p.y-q.y))+(p.x*(q.y-y))+(q.x*(y-p.y))))/2.0;
		}
		int iscollinear(point p,point q)
		{
			double a=area(p,q);
			return (a==0) ;
		}
};
int main()
{
	point p1,p2,p3;
	p1.accept();
	p2.accept();
	p3.accept();
	p1.display();
	p2.display();
	p3.display();
	double dist=p1.distance(p2);
	cout<<"The distance is: "<<dist<<endl ;
	point mid=p1.midpoint(p2);
	mid.display() ;
	double slope=p1.slope(p2);
	cout<<"The slope is: "<<slope<<endl ;
	double area=p1.area(p2,p3);
	cout<<"The area is: "<<area<<endl ;
	if(p1.iscollinear(p2,p3))
	cout<<"Is collinear"<<endl ;
	else
		cout<<"Is non-collinear"<<endl ;
        return 0;
}

