#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll m=1000000007;
pair<ll, ll> fib (ll n) {
    if (n == 0)
        return {0, 1};

    auto p = fib(n >> 1);
    ll c = (p.first%m) * ((2 * p.second%m) - p.first%m)%m;
    ll d = (p.first%m * p.first%m)%m + (p.second%m * p.second%m)%m;
    if (n & 1)
        return {d, (c%m + d%m)%m};
    else
        return {c, d};
}

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        auto p=fib(n);
       ll total=(p.first%m+p.second%m)%m;
       cout<<total<<"\n";
    }
	return 0;
}
