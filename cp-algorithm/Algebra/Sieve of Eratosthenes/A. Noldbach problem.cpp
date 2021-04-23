#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <bool> v(100001,true);
vector<ll>vec;
void  isprime(ll n)
{
    
ll i;
ll j;
ll count=1;
v[1] = false;
    v[0] = false;
    for(i=4;i<=100001;i+=2)
     v[i]=false;
      for(i=3;i*i<=100001;i+=2)
     {
           if(v[i])
             {
                for(j=i*i;j<=100001;j=j+(2*i))
                v[j] = false;
             }
     }
     for(i =2;i<=n;i++)
     {
         if(v[i]==true)
         {
             vec.push_back(i);
         }
     }
}
int main() {
	ll n,k;
	cin>>n>>k;
	isprime(n);
	ll count=0;
	for(ll i=0;i<vec.size();i++)
	{
	    for(ll j=0;j<vec.size();j++)
	    {
	        if(vec[j]+vec[j+1]+1==vec[i])
	        {
	            count++;
	            break;
	        }
	    }
	}
	if(count>=k)
	{
	    cout<<"YES"<<"\n";
	}
	else
	{
	    cout<<"NO"<<"\n";
	}
	return 0;
	
}
