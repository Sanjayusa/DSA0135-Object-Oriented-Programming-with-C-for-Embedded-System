#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int c;
	char a[100],b[100];
	int d,e,div,rev=0;
	cout<<"enter your choice:";
	cin>>c;
	switch(c)
	{
		case 1:
			cout<<"enter a string:";
			cin>>a;
			strcpy(b,a);
			strrev(a);
			if(strcmp(a,b)==0)
			{
				cout<<"its a pakindrome";
			}
			else
			{
				cout<<"its not a palindrome";
				
			}
			break;
		case2:
			cout<<"enter number:";
			cin>>d;
			e=d;
			while(d>0)
			{
				div=d%10;
				rev=(rev*10)+div;
				d=d/10;
			}
			if(e==rev)
			{
				cout<<"its palindrome";
			}
			else
			{
				cout<<"its not a palindrome";
				
			}
			break;
		default:
			cout<<"enter right choice";
			break;
	}
}
