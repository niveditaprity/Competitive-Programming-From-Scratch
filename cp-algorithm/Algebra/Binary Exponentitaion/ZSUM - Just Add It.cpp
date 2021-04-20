#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res =(res * a )% m;
        a =( a * a) % m;
        b >>= 1;
    }
    return res;
}

int main() {
	ll n,k;
	ll m=10000007;
	while(cin>>n>>k)
	{
	    if(n==0 && k==0) return 0;
	    ll res = ( binpow(n,k,m) + 2*binpow(n-1,k,m)+binpow(n,n,m) + 2*binpow(n-1,n-1,m) ) % m ;
	    cout<<res<<"\n";
	}
	return 0;
}
