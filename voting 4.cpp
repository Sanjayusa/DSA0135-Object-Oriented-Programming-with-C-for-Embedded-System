#include <iostream>
using namespace std;

int main()
{
	int r ,age;

	cout<<"Enter the age of the person: ";
	cin>> age;

	if (age>=18)
	{
		cout<<"You are eligible for voting.";
	}
	else if(age<0){
		cout<<"invalid"<<"\n";
	}
	else
	{
		cout<<"You are not eligible for voting.";
		 r=18-age;
		cout<<"\n"<<r<<" years are left to eligible to vote ";	
	
	}

	return 0;
}
