#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int z=0;
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
              cout<<" ";
        }
        for(int k=0;k<=c;k++)
        {
            if(z-k>=0)
            {
            cout<<(z-k);
            }
            if(z-k<0)
            {
                cout<<abs(z-k);
            }
        }
        c+=2;
        z+=1;
        
        cout<<endl;
    }
	return 0;
}
