#include<iostream>
using namespace std;

int main(){

  int x=3,y=4, m=75;
  // LEFT SHIFT OPERATOR
  cout<<"Left Shift"<<endl;
  cout<<"(x<<1):  " <<(x<<1)<<endl;
  cout<<"(x<<2):  "<<(x<<2)<<endl;
  int z= (x<<y);
  cout<<"(x<<y): " <<z<<endl;
// RIGHT SHIFT OPERATOR
  cout<<"RIGHT SHIFT"<<endl;
  cout<< "(m>>1):  "<<(m>>1)<<endl;
  cout<<"(m>>2):  " <<(m>>2)<<endl;
  int z2=(m>>y);
  cout<<"(m>>y): "<<z2 <<endl;
  //Bitwise not, signed input
  int x1=1;
  cout<<"Bitwise not, with signed int "<<endl;
  cout<<"x1=1: "<<(~x1)<<endl;
  int x2=5;
  cout<<"x2=5: "<<(~x2)<<endl;
  // Bitwise not, unsigned input
  unsigned int x3=1;
  cout<<"bitwise not, unsigned input"<<endl;
  cout<<"x3=1: "<<(~x3)<<endl;
  x3=5;
  cout<<"x3=5: "<<(~x3)<<endl;

  return 0;
}
