#include<iostream>
using namespace std;
int main()
{
	int n,rem,dec=0,b=1;
	cout<<"enter the binary number :";
	cin>>n;
	while(n>0)
	{
		rem=n%10;
		dec=dec + rem*b;
		b*= 2;
		n/= 10;
	}
	cout<<"The decimal eqivalant is"<<dec;
	return 0;
}
