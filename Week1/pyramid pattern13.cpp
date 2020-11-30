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
       char c='A';
        for(j=1;j<=i;j++)
        {
            printf("%c", c);
            c++;
        }
         c--;
        for(j=i-1;j>=1;j--)
        {
            c--;
            printf("%c", c);

        }
        cout<<endl;
    }
	return 0;
}
