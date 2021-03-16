#include<iostream>
using namespace std;
// Simple Solution
void oddAppearing(int arr[], int n)
{
  std::cout << "Simple Solution" << '\n';
  for (int i=0; i<n;i++)
  {
    int count=0;
    for (int j=0; j<n; j++)
    {
      if (arr[i]==arr[j])
      count++;
    }
    if (count%2!=0)
    cout<<arr[i]<< " ";
  }
}
// Efficent Solution
void EoddAppearing(int arr[], int n)
{
int xors=0, res1=0, res2=0;

for (int i=0;i<n;i++)
xors=xors^arr[i];

int sn= xors &(~(xors-1));

for(int i=0;i<n;i++)
{
  if((arr[i]&sn)!=0)
  res1=res1^arr[i];
  else
  res2=res2^arr[i];
}
cout<<"Efficent Solution"<<endl;
cout<< res1<<"  "<<res2;
}
int main()
{
  int arr[]={3,4,4,3,3,5,5,5,1,1,1,1,7,7};
  int n=14;
  oddAppearing(arr,n);
  EoddAppearing(arr,n);
}
