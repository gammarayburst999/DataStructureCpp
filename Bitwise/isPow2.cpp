#include<iostream>
using namespace std;
// Simple solution
bool isPow2(int n)
{
  if (n==0)
  return true;
  while (n!=1)
  {
    if(n%2!=0)
    return false;

    n=n/2;
  }
  return true;
}
// Efficient solution
bool isPow2e(int n)
{
  if (n==0)
  return true;
  return ((n&(n-1))==0);
}
int main(){
  int n=4;
  cout<<"Simple Solution"<<endl;
  printf("%s\n",isPow2(n)? "true":"false" );
  cout<<"Efficent Solution"<<endl;
  printf("%s\n",isPow2e(n)? "true":"false" );
}
