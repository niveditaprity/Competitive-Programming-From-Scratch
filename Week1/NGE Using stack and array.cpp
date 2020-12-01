#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	int nge[n];
	for(int i=0;i<n;i++)
	{
	   nge[i]=-1; 
	}
	stack<int>s;
	int i=0;
	    while(i<2*n)
	    {
	       while(!s.empty()&&arr[s.top()]<arr[i%n]) 
	       {
	           nge[s.top()]=arr[i%n];
	           s.pop();
	       }
	       s.push(i%n);
	       i++;
	    }
	    for(int i=0;i<n;i++)
	{
	    cout<<nge[i]<<" ";
	}
	return 0;
}
