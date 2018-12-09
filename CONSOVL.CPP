#include<iostream.h>
#include<conio.h>
class integer
{
	int m,n;
	static int count;
	public:
	integer();
	integer(int x,int y);
	integer(integer &a);
	void display();
};
integer::integer()
{
	count++;
	m=0;
	n=0;
}
integer::integer(int x,int y)
{
	count++;
	m=x;
	n=y;
}
integer::integer(integer &a)
{
	m=a.m;
	n=a.m;
	count++;
}
void integer::display()
{
	cout<<"\nThe no of objects created is"<<count;
	cout<<"\nThe value is "<<m;
	cout<<"\nThe value is "<<n;
}
int integer::count;
void main()
{
	int v1,v2;
	integer I1;
	clrscr();
	I1.display();
	cout<<"\nEnter 2 values";
	cin>>v1>>v2;
	integer I2(v1,v2);
	I2.display();
	integer I3(I2);
	I3.display();
	getch();
}