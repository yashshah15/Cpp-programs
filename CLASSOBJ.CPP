#include<iostream.h>
#include<conio.h>
class employee
{
	char n[20];
	int empid;
	float salary;
	public:
	void read();
	void update();
	void display();
};
void employee :: read()
{
	cout<<"\nEnter employee name";
	cin>>n;
	cout<<"\nEnter salary";
	cin>>salary;
	cout<<"\nEnter employee id";
	cin>>empid;
}
void employee:: display()
{
	cout<<"\nEmployee name :"<<n;
	cout<<"\nEmployee id :"<<empid;
	cout<<"\nSalary :"<<salary;
}
void employee ::update()
{
	int ch;
	cout<<"\n1.Change employee name";
	cout<<"\n2.Change employee id";
	cout<<"\n3.Change salary";
	cout<<"\nEnter choice";
	cin>>ch;
	switch(ch)
	{
		case 1:
		cout<<"\nEnter new name";
		cin>>n;
		break;
		case 2:
		cout<<"\nEnter new employee id";
		cin>>empid;
		break;
		case 3:
		cout<<"\nEnter new salary";
		cin>>salary;
		break;
	}
}
void main()
{
	employee E[3];
	int ch,i;
	clrscr();
	for(i=0;i<3;i++)
	{
		cout<<"\nEmployee "<<i+1<<endl;
		E[i].read();
		E[i].display();
		E[i].update();
		E[i].display();
	}
	getch();
}