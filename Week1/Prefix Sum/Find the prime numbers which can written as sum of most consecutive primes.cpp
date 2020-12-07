#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin>>n;
    int arr[n+1];
    vector<int>v;
    int p;
    cin>>p;
    for(int i=0;i<=n;i++)
    {
        arr[i]=1;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(arr[i]==1)
        {
           v.push_back(i);
            for(int j=i*i;j<=n;j+=i)
            {
                arr[j]=0;
            }
        }
    }
    for(int j=sqrt(n)+1;j<=n;j++)
    {
        if(arr[j]==1)
        {
            v.push_back(j);
            
        }
    }
    int m=0;
   int sum=0;
    for(int i=0;i<=v.size();i++)
    {
        cout<<v[i]<<" ";
        sum+=v[i];
        if(arr[sum]==1)
        {
           m= max(m,sum);
        }
        
    }
    cout<<m;
	return 0;
}
