// to count set bits in an integer
#include<iostream>
using namespace std;
 int table[256];
// Method 1: simple solution
unsigned int ScountSetBits(unsigned int n)
{
  unsigned int count = 0;
  while(n!=0){
    if(n%2!=0)
    count++;
    n=n/2;
  }
  return count;
}
//Method 2 (Brian and Kerningham Algorithm)
 unsigned int BKcountSetBits(int n)
 {
   unsigned int count2=0;
   while(n)
   {
     n=n&(n-1);
     count2++;
   }
   return count2;
 }
// Method 3 : Lookup table

 void initialize()
  {
    table[0]=0;
    for(int i=0; i<256;i++)
    {
      table[i]=(i&1)+table[i/2];
    }
  }
int LTcountSetBits(int n)
{
   return table[n & 0xff]+ table[(n>>8) & 0xff]+ table[(n>>16) & 0xff]+
   + table[(n>>24) & 0xff];
}
 int main()
 {
   int i=8;
   cout<<"Method 1 Simple method i=8: "<<ScountSetBits(i)<<endl;
   cout<<"Method 2 (Brian and Kerningham Algorithm): "<<BKcountSetBits(i)<<endl;
   cout<<"Method 3 Look up table : "<<LTcountSetBits(i)<<endl;
   return 0;
 }
