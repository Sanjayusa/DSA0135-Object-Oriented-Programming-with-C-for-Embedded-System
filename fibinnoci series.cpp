#include<iostream>
using namespace std;
int main()
{
	int nextterm,n1=0,n2=1,n;
	cout<<n1<<" ";
	cout<<n2<<" ";
	cout<<"enter the no of series";
	cin>>n;
	for(int i=2;i<=n;++i)
	{
	nextterm=n1+n2;
	n1=n2;
	n2=nextterm;	
	}
	cout<<nextterm;
	return 0;
}
