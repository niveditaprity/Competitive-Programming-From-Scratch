#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int px=n-1;
    int py=n-1;
    for(int i=0;i<n;i++)
    {
        int k=0;
        for(int j=0;j<2*n-1;j++)
        {
          if(j>=px&&j<=py)
          {
           k++;
              cout<<k;
          }
          else
          {
              cout<<" ";
          }
        }
        px--;
        py++;
        cout<<endl;
    }
	return 0;
}
