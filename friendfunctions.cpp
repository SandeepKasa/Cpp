#include<iostream>
using namespace std;
class time;
class date
{
  private:
	int dd;
	int mm;
	int yy;
  public:
	date(int d,int m,int y)
	{
		dd=d;
		mm=m;
		yy=y;
	}
	friend void show(date d,time t) ;
};
class time
{
	private:
		int hh;
		int mi;
		int ss;
	public:
		time(int h, int m, int s)
		{
			hh=h;
			mi=m;
			ss=s;

		}
	friend void show(date d,time t) ;
};
void show(date d)
{
	cout<<"Date= "<<d.dd<<"-"<<d.mm<<"-"<<d.yy<<endl;
	cout<<"Time= "<<t.hh<<":"<<t.mi<<":"<<t.ss<<endl;
}
int main()
{
	date d1(13,12,13) ;
	time t1(11,51,20) ;
	show(d1,t1);
	return 0;
}
