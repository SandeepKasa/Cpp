class complex 
{
	private:
		double rp;
		double ip;
		friend istream& operator >>(istream& in,complex& c) ;
		friend ostream& operator <<(ostream& out,complex& c) ;
};
        istream& operator >>(istream& in,complex c)
{
	cout<<"Enter real part: ";
	cin>>c.rp ;
	cout<<"Enter imaginary part: ";
	cin>>c.ip ;
	return in ;
}
        ostream& operator <<(ostream& in,complex c)
{
	out<<"complex number: "<<c.rp ;
	if(c.ip>0)
		out<<"+";
	else
		out<<"-";
	out<<fabs(c.ip)<<"i"<<endl ;
	return out;
}

