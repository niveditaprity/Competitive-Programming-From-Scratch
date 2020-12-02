#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
         int flag=0;
        if(n%21==0)
        {
            cout<<"The streak is broken!"<<"\n";
            flag=1;
        }
        if(n%21!=0)
        {
        while(n>0)
        {
            if(n%100==21)
            {
            cout<<"The streak is broken!"<<"\n";
            flag=1;
             break;
            }
            n=n/10;
            }
        }
if(flag==0)
{
        cout<<"The streak lives still in our heart!"<<"\n";
}
      }
    return 0;
}
