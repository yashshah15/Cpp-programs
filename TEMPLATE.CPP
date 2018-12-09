#include<iostream.h>
#include<conio.h>
template<class T>
void swap(T &a,T &b)
{
	T t;
	t=a;
	a=b;
	b=t;
}
void main()
{
	int a,b;
	char x,y;
	float p,q;
	double m,n;
	clrscr();
	cout<<"\nEnter two integers"<<endl;
	cin>>a>>b;
	cout<<"\nNumbers before swapping"<<a<<b;
	swap(a,b);
	cout<<"\nNumbers after swapping"<<a<<n;
	cout<<"\nEnter two float"<<endl;
	cin>>p>>q;
	cout<<"\nNumbers before swapping"<<p<<q;
	swap(p,q);
	cout<<"\nNumbers after swapping"<<p<<q;
	cout<<"\nEnter two characters"<<endl;
	cin>>x>>y;
	cout<<"\nNumbers before swapping"<<x<<y;
	swap(x,y);
	cout<<"\nNumbers after swapping"<<x<<y;
	cout<<"\nEnter two double"<<endl;
	cin>>m>>n;
	cout<<"\nNumbers before swapping"<<m<<n;
	swap(m,n);
	cout<<"\nNumbers after swapping"<<m<<n;
	getch();
}