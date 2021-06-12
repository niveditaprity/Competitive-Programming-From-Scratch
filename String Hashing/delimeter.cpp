#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    getline(cin,s);
    stringstream str(s);
    string tokens;
    vector<string>v;
   while(getline(str,tokens,'-'))//break string with some delimeter
    {
        v.push_back(tokens);
    }
    for(auto t:v)
    {
        cout<<t<<"\n";
    }
    
	return 0;
}de
