#include<iostream.h>
#include<conio.h>
#include<fstream.h>
ifstream f;
char str[20];
void main()
{
	clrscr();
	f.open("abc.txt");
	do
	{
		f.getline(str,20);
		cout<<str<<endl;
	}while(f.eof()==0);
	f.close();
	getch();
}