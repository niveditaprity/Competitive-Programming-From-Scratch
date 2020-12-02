#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int count=0;
        int sum=0;
        int flag=0;
        for(int i=0;i<t;i++)
        {
         sum+=arr[i];
         count++;
         if(sum>=n)
         {
             flag=1;
          break;
         }  
        }
        if(flag!=0)
        {
            cout<<count<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
