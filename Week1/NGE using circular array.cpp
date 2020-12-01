#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	
	for(int i=0;i<n;i++)
	{
	    int max=0;
	    for(int j=i;j<n+i;j++)
	    {
	     if(arr[i]<arr[j%n])
	     {
	      max=arr[j%n];
	      break;
	     }
	    }
	    if(max>0)
	    {
	        cout<<max<<" ";
	    }
	    else{
	        cout<<-1<<" ";
	    }
	}
	return 0;
}
