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
        vector<ll>factorisation;
        for(ll i=2;i*i<=n;i++)
        {
            while(n%i==0)
            {
                factorisation.push_back(i);
                n=n/i;
            }
        }
        if (n > 1)
        factorisation.push_back(n);
        for(ll i=0;i<factorisation.size();i++)
        {
            cout<<factorisation[i]<<" ";
        }
        cout<<"\n";
    }
	return 0;
}
