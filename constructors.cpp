#include<iostream>
using namespace std;
class point
{
	private:
		double x;
		double y;
	public:
		point()
		{
			x=0;
			y=0;
		}
		point(double x)
		{
			this->x=x;
			y=0;
		}
		point(double x,double y)
		{
			this->x=x;
			this->y=y;
                }
		void display()
		{
			cout<<"("<<x<<","<<y<<")"<<endl;
		}
};
   int main()
{
	point p1;
	point p2(5);
	point p3(3.5,6.7);
	p1.display();
	p2.display();
	p3.display();
	return 0;
}
