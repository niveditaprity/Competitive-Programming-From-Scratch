#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<bool>v(3001,true);
vector<int>arr;
void sieve()
{
    ll n=3001;
    v[0]=false;
    v[1]=false;
    ll i,j;
    for(i=4;i<n;i+=2)
    {
      v[i]=false;  
    }
    for(i=3;i<n;i+=2)
    {
        for(j=i*i;j<n;j+=(2*i))
        {
            v[j]=false;
        }
    }
    for(i=2;i<=n;i++)
    {
        if(v[i])
        {
        arr.push_back(i);
        }
    }
}
int main() {
    sieve();
       ll count;
       vector<ll>vec;
	for(int num=5; num<3001; num++){
		int count = 0;
		for(int j = 0; j<arr.size(); j++){
			if(num % arr[j] == 0){
				count += 1;
			}
			if(count >= 3){
				vec.push_back(num);
				break;
			}
		}
	}
    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll p;
        cin>>p;
      cout<<vec[p-1]<<"\n";
    }
	return 0;
}
