  // USING DYNAMIC MEMORY ALLOCATION //

#include<iostream>
using namespace std;
class matrix
{
	private:
		int **mat;
		int row;
		int col;
	public:
		matrix(int ,int );
		~matrix();
		matrix& operator +(matrix& );
		matrix& operator -(matrix& );
		matrix& operator *(matrix& );
		matrix& operator ~( );

		friend istream& operator >>(istream& ,matrix& );
		friend ostream& operator <<(ostream& ,matrix& );
};

matrix :: matrix(int row , int col)
{
	this->row=row;
	this->col=col;
	mat=new int *[this->row] ;
	for(int i=0;i<(this->row);i++)
	{
		mat[i]=new int [this->col] ; 
	}
}
matrix :: ~matrix()
{
	for(int i=0;i<row;i++)
	{
		delete mat[i] ;
	}
	delete mat;
}
istream& operator >>(istream& in,matrix& m)
{
	cout<<"Enter matrix values: ";
	for(int i=0;i<m.row;i++)
	{
		for(int j=0;j<m.col;j++)
		{
			in>>m.mat[i][j];
		}
	}
	return in;
}
ostream& operator <<(ostream& out,matrix& m)
{
	cout<<"Matrix is ....."<<endl;
	for(int i=0;i<m.row;i++)
	{
		for(int j=0;j<m.col;j++)
		{
			out<<m.mat[i][j]<<"\t" ;
		}
		out<<endl ;
	}
	return out;
}
matrix& matrix :: operator +(matrix& m)
{

	cout<<"Result of addition is..."<<endl ;
	matrix *temp=new matrix(3,3);
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			temp->mat[i][j]=m.mat[i][j]+mat[i][j] ;
		}
	}
	return *temp;
}
matrix& matrix :: operator -(matrix& m)
{
	cout<<"Result of subtraction is....."<<endl ;
	matrix *temp=new matrix(3,3);
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			temp->mat[i][j]=mat[i][j]-m.mat[i][j] ;
		}
	}
	return *temp;
}
matrix& matrix :: operator *(matrix& m)
{
	cout<<"Result of multiplication is....."<<endl ;
	matrix *temp=new matrix(3,3);
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			temp->mat[i][j]=0;
			for(int k=0;k<3;k++)
			{
				temp->mat[i][j]=temp->mat[i][j]+mat[i][k]*m.mat[k][j] ;
			}
		}
	}
	return *temp;
}
matrix& matrix :: operator ~()
{
	cout<<"Result of transpose is....."<<endl ;
	matrix *temp=new matrix(3,3) ;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			temp->mat[i][j]=mat[j][i];
		}
	}
	return *temp;
}

int main()
{
	matrix mat1(3,3) , mat2(3,3) , mat3(3,3) , mat4(3,3) , mat5(3,3) , mat6(3,3) , mat7(3,3);
	cin>>mat1;
	cin>>mat2;
	mat3=~mat1;
	cout<<mat3<<endl ;
	mat4=~mat2;
	cout<<mat4<<endl;
	mat5=mat1+mat2;
	cout<<mat5<<endl;
	mat6=mat1-mat2;
	cout<<mat6<<endl;
	mat7=mat1*mat2;
	cout<<mat7<<endl;
	return 0;
}

// END OF PROGRAM //
