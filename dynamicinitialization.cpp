#include<iostream>
#include<string.h>
using namespace std;
class person
{
	private:
		char aname[20];
		char bname[20];
		char cname[20];
	public:
		person();
		person(char []);
		person(char [],char []);
                person(char [],char [],char []);
		void display();
};
    person :: person()
{
	 strcpy(aname," ");
         strcpy(bname," ");
         strcpy(cname," ");
}
    person :: person(char a[])
{
	strcpy(aname,a);
	strcpy(bname," ");
	strcpy(cname," ");
}
    person :: person(char a[],char b[])
{
	strcpy(aname,a);
	strcpy(bname,b);
	strcpy(cname," ");
}
    person :: person(char a[],char b[],char c[])
{
	      strcpy(aname,a);
	      strcpy(bname,b);
              strcpy(cname,c);
}
  void  person :: display()
{
	cout<<aname<<" "<<bname<<" "<<cname<<endl;
}
 int main()
{
	person p1,p2,p3 ;
	p1=person("Sandeep");
        p2=person("Sandeep" , "Dravid");
        p3=person("Sandeep" , "Dravid" , "Kohli");
	p1.display();
	p2.display();
	p3.display();
        return 0;
}
     

