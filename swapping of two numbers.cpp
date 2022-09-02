#include<iostream>
using namespace std;
int swap(int num1,int num2)
{
	int n;
	n = num1;
	num1 = num2;
	num2 = n;
}
int main()
{
	float a,b,end1;
	char y;
	cout<<"Enter the Value of A :";
	cin>>a;
	if(a==y){
	cout<<" ERROR ";
	}
    else
    {
	cout <<"\n before swap"<<"\n A = "<<a<<"\n b =" <<b<<end1;
	swap(a,b);
	cout <<"\n after swap"<<"\n A ="<<a<<"\n b ="<<b<<end1;
    }
	return 0;
}
