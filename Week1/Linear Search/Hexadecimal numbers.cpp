#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
     
}
int sum(int l)
{
    int s=0;
    while(l>0)
    {
        s+=l%16;
        l=l/16;

    }
    return s;
}
int main()
{
int t;
cin>>t;
while(t--)
{
int l,r;
cin>>l>>r;
int c=0;
for(int i=l;i<=r;i++)
{
    if(gcd(i,sum(i))>1)
    {
        c++;
    }
}
cout<<c<<"\n";
}
}
