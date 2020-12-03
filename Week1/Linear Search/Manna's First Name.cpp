
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int SUVO=0,SUVOJIT=0;
        for(int i=0;i<s.size()-3;i++)
        {
        
    if(s[i]=='S'&&s[i+1]=='U'&&s[i+2]=='V'&&s[i+3]=='O')
    {
        SUVO++;
        if(i<s.size()-6)
        {
    if(s[i+4]=='J'&&s[i+5]=='I'&&s[i+6]=='T')
    {
        SUVOJIT++;
        SUVO--;
    }
            }
        }
        }
     cout<<"SUVO"<<" "<<"="<<" "<<SUVO<<","<<" "<<"SUVOJIT"<<" "<<"="<<" "<<SUVOJIT<<endl;
    }
    return 0;
}
