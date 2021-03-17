#include <bits/stdc++.h>
using namespace std;

long long computehash(string const&s)
{
    const int p=31;//all letters are lowercase
    const int m=1e9+9;
    long long hash_val=0;
    long long h=1;
    for(char c:s)
    {
       hash_val=(hash_val+(c-'a'+1)*h)%m;
       h=(h*p)%m;;
    }


return hash_val;

}
int main() {
string  s;
cin>>s;
cout<<computehash(s)<<endl;
	return 0;
}
