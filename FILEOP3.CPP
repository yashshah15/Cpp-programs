#include<iostream.h>
#include<conio.h>
#include<fstream.h>
char a[10];
void main()
{
	ifstream f1;
	ofstream f2;
	clrscr();
	f1.open("file1.txt");
	f1>>a;
	f1.close();
	f2.open("file2.txt");
	f2<<a;
	f2.close();
	getch();
}