#include <bits/stdc++.h>
using namespace std;
void check(int arr[],int n)
{
    int evensum=0;
    int oddsum=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            evensum+=arr[i];
        }
        else
        {
            oddsum+=arr[i];
        }
    }
    if(evensum==oddsum)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main() {
	int n;
	cin>>n;
    int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	check(arr,n);
	return 0;
}
