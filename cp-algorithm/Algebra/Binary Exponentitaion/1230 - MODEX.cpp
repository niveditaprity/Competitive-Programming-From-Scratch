#include <bits/stdc++.h>
using namespace std;
long long binop(long long a,long long b,long long m)
{
    a=a%m;
    long long r=1;
    while(b>0)
    {
        if(b&1)
        {
            r=r*a%m;
        }
        a=a*a%m;
    b>>=1; 
    }
    return r;
}
int main() {
	int t;
	cin>>t;
	for(int j=1;j<=t;j++)
	{
	 long long  x,y,n;
	 cin>>x>>y>>n;
	 cout<<binop(x,y,n)<<"\n";
	 
	}
	return 0;
}
