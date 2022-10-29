#include<iostream>
using namespace std;
int swap(int &num1,int &num2)
{

int temp;
temp=num1;
num1=num2;
num2=temp;
return 0;
}
int main()
{
	int a,b;
	cout<<"enter the first numbers :";
	cin>>a;
	cout<<"enter the second number :";
	cin>>b;
	
	swap(a,b);
	cout<<"the swapping of two numbers is :"<<"\n A="<<a<<"\n B="<<b;
	return 0;

}
