#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int px=n-1;
    int py=n-1;
     char k='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
          if(j>=px&&j<=py)
          {

              cout<<k;
          }
          else
          {
              cout<<" ";
          }
        }
        k+=2;
        px--;
        py++;
        cout<<endl;
    }
	return 0;
}
