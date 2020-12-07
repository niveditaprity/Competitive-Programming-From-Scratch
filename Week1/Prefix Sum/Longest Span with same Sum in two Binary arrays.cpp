#include<bits/stdc++.h>
using namespace std;
int longest(int arr1[],int arr2[],int n)
{
    int diff[2*n+1];
    int p1=0,p2=0;
    memset(diff,-1,sizeof(diff));
    int maxlen=0;
    for(int i=0;i<n;i++)
    {
        p1+=arr1[i];
        p2+=arr2[i];
        int d=p1-p2;
        int id=n+d;
        if(d==0)
        {
           maxlen=i+1;
        }
       else if(diff[id]==-1)
        {
           diff[id]=i;
        }
        else
        {
            int len=i-diff[id];
            if(maxlen<len)
            {
                maxlen=len;
            }
        }
    }
    return maxlen;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    cout<<longest(arr1,arr2,n)<<endl;
    }
    return 0;
}
