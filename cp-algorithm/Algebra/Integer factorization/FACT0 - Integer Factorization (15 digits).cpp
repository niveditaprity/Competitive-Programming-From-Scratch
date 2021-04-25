#include<bits/stdc++.h>
using namespace std;
typedef unsigned  long long ll;
int main()
{
  ll n;
   while(cin>>n &&n!=0)
   {
       ll count=0;
       while(n%2==0)
       {
           count++;
           n=n>>1;
       }
       if(count>0)
       {
       cout<<2<<"^"<<count<<" ";
       }
       for (ll d = 3; d * d <= n; d += 2) {
           count=0;
        while (n % d == 0) {
            count++;
        
            n /= d;
        }
        if(count>0)
       {
        cout<<d<<"^"<<count<<" ";
       }
    }
    if (n > 1)
    {
    cout<<n<<"^"<<1;
    }
	    cout<<"\n";
   }
      return 0;
   }
