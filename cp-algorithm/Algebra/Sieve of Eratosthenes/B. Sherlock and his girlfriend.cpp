#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <bool> v(100001,true);
int arr[100001];

void  prime(ll n)
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
}



int main() {
	ll n;
	cin>>n;
	prime(n);
	ll pr=0,npr=0;
	for(ll i=2;i<=n+1;i++)
	{
	 if(v[i]==true) 
	 {
	     pr++;
	 }
	 else
	 {
	     npr++;
	 }
	}
	if(npr==0)
	{
	    cout<<1<<"\n";
	}
	else
	{
	    cout<<2<<"\n";
	}
	for(ll i=2;i<=n+1;i++)
	{
	    if(v[i]==true)
	    {
	        cout<<1<<" ";
	    }
	    else
	    {
	        cout<<2<<" ";
	    }
	}
	cout<<"\n";
	return 0;
}
