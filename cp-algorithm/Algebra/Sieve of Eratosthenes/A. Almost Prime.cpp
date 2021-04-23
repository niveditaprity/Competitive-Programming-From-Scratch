#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll count(ll n)
{
    vector<bool>v(3001,true);
    int pfactor[3001]={0};
    ll count=0;
    ll i ,j;
    for (i = 2; i<= n; i++) {
        
    if (v[i]) {
        for (j = i+i; j <= n; j += i)
        {
            v[j] = false;
            pfactor[j]+=1;
        }
    }
    if(pfactor[i]==2)
    {
        count++;
    }
}
return count;

    
}

int main() {
	ll  n;
	cin>>n;
	cout<<count(n)<<"\n";
	return 0;
}
