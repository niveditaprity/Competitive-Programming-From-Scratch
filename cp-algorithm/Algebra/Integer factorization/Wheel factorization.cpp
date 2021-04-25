#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> factorization;
    while (n % 2 == 0) {
        factorization.push_back(2);
        n /= 2;
    }
    for (ll d = 3; d * d <= n; d += 2) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
    {
        factorization.push_back(n);
    }
        for(ll i=0;i<factorization.size();i++)
        {
            cout<<factorization[i]<<" ";
        }
        cout<<"\n";
    }
	return 0;
}
