
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<n/2;i++)
    {
        if(arr[i]==k)
        {
            cout<<i;
            break;
        }
        if(arr[n-1-i]==k)
        {
            cout<<n-1-i;
            break;
        }
    }
    return 0;
}
