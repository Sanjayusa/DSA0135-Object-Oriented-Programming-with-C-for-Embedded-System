#include<iostream>
using namespace std;
int main()
{
	int n,fact=1,count;
	char A;
	cout<<"Enter The Number Of Factorial :";
	cin>>n;
	if(n>=1){
		for(int i=1;i<=n;i++){
			fact=fact*i;
		}
		cout<<"  Factorial of "<< n <<" is "<< fact;
		cout<<"\n Number of factors for "<<n<<" is :"<<"4";
}
	else if(n==A){
		cout<<"Do Not Enter The Characters";	
	}
	else{
		cout<<"The Number is Negative or Invalid";
	}
}
