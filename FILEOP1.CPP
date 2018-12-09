#include<fstream.h>
#include<iostream.h>
#include<conio.h>
char a[20];
void main()
{
	ofstream fp;
	clrscr();
	cout<<"\nEnter a word"<<endl;
	cin>>a;
	fp.open("file1.txt");
	fp<<a;
	fp.close();
	getch();
}