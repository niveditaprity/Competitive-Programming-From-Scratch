#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll powfunc(ll a,ll b)
{
    ll ans;
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }
    if(b%2==0)
    {
        ll temp=powfunc(a,b/2);
        ans=temp*temp;
    }
    else
    {
        ll temp =powfunc(a,(b-1)/2);
        ans=temp*temp*a;
    }
    return ans;
}
int main() {

int t;
cin>>t;
while(t--)
{
    int a,b;
    cin>>a>>b;
    cout<<powfunc(a,b)<<endl;
}
return 0;
}
