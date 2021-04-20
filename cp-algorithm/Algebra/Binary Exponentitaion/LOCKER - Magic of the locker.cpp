#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long binPow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res%m * a % m)%m;
        a =(a%m * a % m)%m;
        b >>= 1;
    }
    return res;
}
int main() {
	ll t, n,M;
	M=1000000007;
	cin >> t;
	while(t--) {
		ll ans, n1;
		cin >> n;
		if(n < 3) {
			cout << n << endl;
			continue;
		}
		
		if(n%3 == 1) {
			n1 = (n - 4) / 3;
			ans = 4*binPow(3, n1,M);
		}
		else if(n%3 == 2){
			n1 = (n - 2) / 3;
			ans = 2*binPow(3, n1,M);
		}
		else 
			ans = binPow(3, n/3,M);
		ans=ans%M;
		cout << ans << endl;
	}
	return 0;
}
