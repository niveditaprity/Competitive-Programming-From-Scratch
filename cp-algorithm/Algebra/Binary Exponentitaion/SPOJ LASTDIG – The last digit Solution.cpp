#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long binPow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a);
        a =(a* a);
        b >>= 1;
    }
    return res%10;;
}
int main() {
	ll t;
	cin >> t;
	while(t--) {
		ll a,b,ans;
		cin >> a>>b;
		if(a==0&&b>0)
		{
		  ans=0;
		  cout << ans << endl;
		  continue;
		}
		else if(a>0&&b==0)
		{
		    ans=1;
		    cout << ans << endl;
		    continue;
		}
		else if(b%4==0)
		{
		    b=4;
		}
		else
		{
		    b=b%4;
		}
		ans = binPow(a,b);
		cout << ans << endl;
	}
	return 0;
}
