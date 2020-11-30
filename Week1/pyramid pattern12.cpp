#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int j;
    for(int i=1;i<=n;i++)
    {
        for(int k=n-1;k>i;k--)
        {
              cout<<" ";
        }
       
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }

        for(j=i-1;j>=1;j--)
        {
            printf("%d", j);
        }
        cout<<endl;
    }
	return 0;
}
