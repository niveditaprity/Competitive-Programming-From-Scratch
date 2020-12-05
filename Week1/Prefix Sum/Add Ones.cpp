#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int k,n;
         cin>>k>>n;
         int arr[n];
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }
        int a[k]={0};
        for(int i=0;i<n;i++)
        {
            for(int c=arr[i]-1;c<k;c++)
            {
                a[c]++;
            }
        }
        for(int i=0;i<k;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
         
     }
     //code
	return 0;
}
