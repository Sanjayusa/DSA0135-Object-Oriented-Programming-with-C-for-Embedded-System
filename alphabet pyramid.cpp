#include<iostream>
using namespace std;
int main()
{
	char  m,alphabet='A';
	cout<<"enter the last character upto print  :";
	cin>>m;
	for(int i=1;i<=(m-'A'+1);i++){
		for(int j=1;j<=i;j++){
			cout<<alphabet<<" ";
		}
		alphabet++;
		cout<<"\n";
	}
	return 0;
}
