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
	for(int i=3;i<n+3;i++)
	{
	    cout<<arr[i%n]<<endl;
	}
	return 0;
}
