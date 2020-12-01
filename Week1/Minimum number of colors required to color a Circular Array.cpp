#include <bits/stdc++.h>
using namespace std;
void check(int arr[],int n)
{
 bool all_s=true;
 bool all_d=true;
 for(int i=0;i<n-1;i++)
 {
     if(arr[i]!=arr[i+1])
     {
         all_s=false;
         break;
     }
 }
 if(all_s==true)
 {
     cout<<1<<endl;
     return;
 }
 if(n%2==0 && all_d==true)
 {
     cout<<2<<endl;
     return;
 }
 cout<<3<<endl;
 
}
    
    
int main() {
	int n;
	cin>>n;
    int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	check(arr,n);
	return 0;
}
