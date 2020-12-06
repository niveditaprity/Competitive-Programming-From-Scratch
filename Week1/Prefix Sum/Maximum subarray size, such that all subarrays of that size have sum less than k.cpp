#include <bits/stdc++.h>
using namespace std;
int findMax(int num[],int n,int k)
{
    int p[n];
    p[0]=num[0];
    if(k<num[0])
    {
        return 0;
    }
    for(int i=1;i<n;i++)
    {
        if(num[i]>k)
        {
            return 0;
        }
        p[i]=num[i]+p[i-1];
    }
    int j=1;
    while(j<n)
    {
        for(int i=1;i<n;i++)
        {
            if(p[j]-p[i-1]>k)
            {
                return j-1;
            }
        }
        j++;
    }
}

int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<findMax(arr,n,k);
	return 0;
}
