#include<iostream.h>
#include<conio.h>
class volume
{
	public:
	void vol(int s);
	void vol(int r,int h);
	inline float vol(double r,int h);
	void vol(double r);
};
void volume :: vol(int s)
{
	int vol;
	vol=s*s*s;
	cout<<"\nThe volume of square is "<<vol;
}
void volume :: vol(int r,int h)
{
	float v;
	v=0.33*r*r*h*3.14;
	cout<<"\nThe volume of cone is"<<v;
}
inline float volume::vol(double r,int h)
{
	return(3.14*r*r*h);
}
void volume:: vol(double r)
{
	double v;
	v=3.14*r*r*r;
	cout<<"\nThe volume of sphere is "<<v;
}
void main()
{
	volume V;
	double v,r1,r2;
	int ch,s,r,h,h2;
	clrscr();
	cout<<"\n1.Volume of square";
	cout<<"\n2.volume of cone";
	cout<<"\n3.Volume of cylinder";
	cout<<"\n4.Volume of sphere";
	cout<<"nENter choice";
	cin>>ch;
	switch(ch)
	{
		case 1:
		cout<<"\nEnter side";
		cin>>s;
		V.vol(s);
		break;
		case 2:
		cout<<"\nENter radius and height";
		cin>>r>>h;
		V.vol(r,h);
		break;
		case 3:
		cout<<"\nEnter radius and height";
		cin>>r1>>h;
		v=V.vol(r1,h);
		cout<<"\nThe volume of cylinder is "<<v;
		break;
		case 4:
		cout<<"\nEnter radius ";
		cin>>r1;
		V.vol(r1);
		break;
		default:
		cout<<"\nWrong choice";
		break;
	}
	getch();
}