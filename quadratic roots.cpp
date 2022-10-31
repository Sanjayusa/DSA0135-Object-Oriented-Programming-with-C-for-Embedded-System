# include<iostream>
# include<conio.h>
using namespace std;
int main (){
   float a,b,c,r1,r2,d;
   cout<<"enter the values of a b c";
   cin>>a >> b >>c ;
   d = b*b – 4*a*c;
   if (d>0){
      r1 = -b+sqrt (d) / (2*a);
      r2 = -b-sqrt (d) / (2*a);
      cout<<"The real roots"<< r1 << r2;
   }
   else if (d= =0){
      r1 = -b/(2*a);
      r2 = -b/(2*a);
      cout<<"roots are equal" << r1 << r2);
   }
   else
      cout<<"Roots are imaginary";
  }
