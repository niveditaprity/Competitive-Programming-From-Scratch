#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s="hello world how  are you";
    int n=s.size();
    int p=n+10;
    char str[p];
    int j=p-1;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]!=' ')
        {
            str[j--]=s[i];
        }
        else
        {
            str[j--]='0';
            str[j--]='2';
            str[j--]='%';
        }
    }
    cout<<str;
    
    
	return 0;
}
//output:hello%20world%20how%20%20are%20you
