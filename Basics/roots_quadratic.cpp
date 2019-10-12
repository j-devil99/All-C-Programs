#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
	int a , b , c , r1 , r2 ;
  float R1 , R2 , D , d ;
  
  cin>>a>>b>>c;
  if (a==0)
  {
    cout<<1<<endl<<0<<" "<<0;
  return 0;
  }
  d = (b*b)-(4*a*c);
  if (d>=0)
  {
  D = pow(d,0.5);
  R1 = ((-b) + D)/(2*a);
  R2 = ((-b) - D)/(2*a);
  r1 = round(R1);
  r2 = round(R2);
  if (R1==R2)
  {
    cout<<0<<endl;
    cout<<r1<<" "<<r2;
  }
  else 
  {
    cout<<1<<endl;
    cout<<r1<<" "<<r2;
  }
  }
  else
    cout<<-1;
  
 
}
