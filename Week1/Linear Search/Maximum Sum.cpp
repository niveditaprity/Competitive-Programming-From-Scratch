
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll fsum=0,c=0;
    ll m=INT_MIN;
    for(ll i=0;i<n;i++)
    {
     if(arr[i]>=0)
     {
         fsum+=arr[i];
         c++;
     }
     else
     {
      m=max(m,arr[i]);
     }
    }
    if(c)
    {
    cout<<fsum<<" "<<c;
    }
    else{
        cout<<m<<" "<<1;
    }
    return 0;
}
