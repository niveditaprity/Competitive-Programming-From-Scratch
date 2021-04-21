#include <iostream>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) {
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}
ll lcm (ll a, ll b) {
    return a / gcd(a, b) * b;
}
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll p=gcd(a,b);
        ll l=lcm(a,b);
	cout<<p<<" "<<l<<"\n";
    }
	
	return 0;
}
