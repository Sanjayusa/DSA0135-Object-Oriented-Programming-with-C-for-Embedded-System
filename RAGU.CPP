#include<iostream.h>
#include<conio.h>
void main()
{
int n,rem;
clrscr();
cout<<"Enter the integer:";
cin>>n;
while(n!=0)
{
  rem=n%16;
  n=n/16;
  //if(n<0)
 // {
   //  cout<<"error! enter the positive number";
   //}
   if(n<10||rem<10)
 {
   cout<<n;
}
if(rem==10){
cout<<"A";
}
else if(rem==11){
cout<<"B";
}
else if(rem==12){
cout<<"C";
}
else if(rem==13){
cout<<"D";
}
else
cout<<rem;
}
}
