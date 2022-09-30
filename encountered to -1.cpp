#include<iostream>
using namespace std;
int main()
{
	int n,arr[100],pos=0,neg=0;
	cout<<"enter the how many numbers :";
	cin>>n;
	cout<<"enter the number ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	if(arr[i]==-1){
		break;
		}
	else if(arr[i]>0){
		pos += arr[i]/5;
    }
	else{
		neg += arr[i];
	}
}
	cout<< "\n"<<"the sum of positive number is :"<<pos;
	cout<<"\n "<<"the sum of negative number is :"<<neg;
	return 0;
	
}
