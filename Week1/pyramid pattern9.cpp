#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int z=0;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
              cout<<" ";
        }
        for(int k=0;k<=z;k++)
        {
            printf("%c",z-k+65);
        }
        z+=2;
        
        cout<<endl;
    }
	return 0;
}
