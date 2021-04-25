#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <bool> v(100000000,true);
int prime[8000000];
int main()
{
    long long int n;
    cin>>n;
    long int i,j ;
    v[1] = false;
    v[0] = false;
    for(i=4;i<=n;i+=2)
     v[i]=false;
      for(i=3;i*i<=n;i+=2)
     {
           if(v[i])
             {
                for(j=i*i;j<=n;j=j+(2*i))
                v[j] = false;
             }
     }
       j=0;
       prime[0] = 2;
       for(i=3;i<=n;i+=2)
      {
        if(v[i])
        prime[++j]=i;
       }
       vector<ll>factorisation;
	    for(ll d:prime)
	    {
	        if (d * d > n)
	        {
            break;
	        }
	        while(n%d==0)
	        {
	            factorisation.push_back(d);
	            n=n/d;
	        }
	    }
	    if(n>1)
	    {
	        factorisation.push_back(n);
	    }
	    for(ll p=0;p<factorisation.size();p++)
	    {
	        cout<<factorisation[p]<<" ";
	    }
	    cout<<"\n";
      return 0;
   }
