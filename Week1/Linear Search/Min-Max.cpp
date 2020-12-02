
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  } 
  sort(arr,arr+n);
  int maxs=0,minsum=0;
  for(int i=0;i<n;i++)
  {
  if(i<n-1)
  {
   minsum+=arr[i];
  }
  if(i>=1)
  {
      maxs+=arr[i];
  }
  } 
  cout<<minsum<<" "<<maxs;
  return 0;
}
