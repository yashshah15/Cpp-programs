#include<iostream.h>
#include<conio.h>
#include"swapp.cpp"
int a[10],i,j;
void main()
{
	clrscr();
	cout<<"\nEnter array elements";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<"\n";
	}
	getch();
}