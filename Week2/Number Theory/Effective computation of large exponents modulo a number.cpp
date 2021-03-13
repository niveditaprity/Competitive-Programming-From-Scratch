#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll powfunc(ll a,ll b,ll m)
{
    a=a%m;
    ll ans =1;
    while(b>0)
    {
       if(b&1)
       {
           ans=ans*a%m;
       }
       else
       {
           a=a*a%m;
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
        ll a,b,c;
        cin>>a>>b>>c;
        cout<<powfunc(a,b,c)<<endl;
    }
    return 0;
}
