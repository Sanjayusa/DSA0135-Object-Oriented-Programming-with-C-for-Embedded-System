#include<stdio.h>
int main()
{
	int arr[10],i,num,n,cnt=0,pos;
	cout"\n enter arraay size :";
	cin>>n;
	cout<<"\n enter array elements : \n ";
	for(i=0;i<n;i++)
	{
		cout<<" ";
		cin>>arr[i];
	}
	cout<<"\n enter elementsto be serched :";
	cin>>num;
	for(i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
			cnt=1;
			pos=i+1;
			break;
		}
	}
	if(cnt==0)
	{
		cout<<"\n elements not found....!";
	}
	else
	{
		cout<<"\n elements"<<num<<"found at position"<<pos;
	}
	return 0;
}
