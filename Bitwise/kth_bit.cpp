/* Check if the k the bit of a given number is set or not
for example: input 5 =101, so first and last bit is set
for input n=5, k=1, output is set
*/

#include<iostream>
using namespace std;
//LEFT SHIFT
void Kbit_usingLeft(int n, int k)
{
  cout<<"Using Left Shift  ";
  if(n&(1<<(k-1)))
  cout<<"SET "<<endl;
  else
  cout<<"NOT SET "<<endl;
}
//Right Shift
void Kbit_usingRight(int n, int k)
{
  cout<<"Using Right Shift  ";
  if((n>>(k-1))&1)
  cout<<"SET "<<endl;
  else
  cout<<"NOT SET "<<endl;
}
int main()
{
  int n=5,k=1;
  Kbit_usingLeft(n,k);
  Kbit_usingRight(n,k);
  return 0;
}
