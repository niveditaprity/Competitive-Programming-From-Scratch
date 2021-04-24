#include<iostream>
using namespace std;
int main()
{
    int n,i,f;
    while(cin>>n&&n!=0)
    {
        f=0;
        if(n==3)
            cout<<"3"<<endl;
        else
        {
            for(i=3; i*i<=n; i=i+2)
            {

                if(n%i==0)
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
                cout<<i<<endl;
            else
                cout<<n<<endl;
        }

    }
}
