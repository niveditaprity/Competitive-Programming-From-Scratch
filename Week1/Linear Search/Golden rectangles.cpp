
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n--)
    {
    int w,h;
    cin>>w>>h;
    double r,a,b;
    if(w>h)
    {
        a=w;
        b=h;
    r=(a/b);
    }
    else{
        a=h;
        b=w;
      r=a/b;
    }
    if(r>=1.6 && r<=1.7)
    {
        count++;
    }
    }
    cout<<count;
    return 0;
}
