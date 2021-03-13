#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll powfunc(ll a,ll b)
{
    ll ans =1;
    while(b>0)
    {
       if(b&1)
       {
           ans=ans*a;
       }
       else
       {
           a=a*a;
       }
       b>>=1;
    }
    return ans;
}
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<powfunc(a,b)<<endl;
    }
    return 0;
}
