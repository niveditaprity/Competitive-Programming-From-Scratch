
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,a,b;
   cin>>n>>a>>b;
    int m=INT_MAX;
    for(int i=0;i<=n/2;i++)
    {
      int p=i*i*a+(n-i)*(n-i)*b;
      if(p<m)
      {
          m=p;
      }
       int x=i*i*b+(n-i)*(n-i)*a;
        if(x<m)
      {
          m=x;
      }
    }
        cout<<m<<endl;
    }
    return 0;
}
