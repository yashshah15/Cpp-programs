#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
	char str[20];
	public:
	void operator +(string S1);
	void operator <(string S2);
	void operator -();
	void operator ==(string S3);
	void read()
	{
		cout<<"\nEnter a string";
		cin>>str;
	}
	void display()
	{
		cout<<"\nSring :"<<str;
	}
};
void string::operator +(string S1)
{
	string S;
	strcpy(S.str,strcat(str,S1.str));
	S.display();
}
void string::operator <(string S2)
{
	strcpy(S2.str,str);
	S2.display();
}
void string :: operator -()
{
	int l;
	l=strlen(str);
	cout<<"\nThe length of "<<str<<" is "<<l;
}
void string :: operator ==(string S3)
{
	int f;
	f=strcmp(str,S3.str);
	if(f==0)
	{
		cout<<"\nStrings are equal";
	}
	else
	{
		cout<<"\nStrings are not equal";
	}
}
void main()
{
	string s,s1,s2,s3;
	clrscr();
	s.read();
	s1.read();
	s+s1;
	s2.read();
	s3.read();
	s2<s3;
	s1.read();
	-s1;
	s2.read();
	s3.read();
	s2==s3;
	getch();
}