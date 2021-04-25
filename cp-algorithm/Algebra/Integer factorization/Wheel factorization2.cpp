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
        for(int d:{2,3,5})
        {
            while(n%d==0)
            {
                factorization.push_back(d);
                n=n/d;
            }
        }
        static array<int,8>increments={4, 2, 4, 2, 4, 6, 2, 6};
        int i=0;
        for(int d=7;d*d<=n;i+=increments[i++])
        {
            while(n%d==0)
            {
                factorization.push_back(d);
                n=n/d;
            }
            if(i==8)
            {
                i=0;
            }
        }
        if(n>1)
        {
            factorization.push_back(n);
        }
        for(int j=0;j<factorization.size();j++)
        {
            cout<<factorization[j]<<" ";
        }
        cout<<"\n";
    }
	return 0;
}
