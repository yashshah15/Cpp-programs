#include<iostream.h>
#include<conio.h>
#include<fstream.h>
char a[10];
void main()
{
	ifstream f;
	clrscr();
	f.open("file1.txt");
	f>>a;
	cout<<"\nExtracted word is"<<a;
	f.close();
	getch();
}