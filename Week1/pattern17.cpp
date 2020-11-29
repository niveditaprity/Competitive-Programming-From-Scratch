#include <iostream>
using namespace std;

int main() {
	for(int i=1;i<=5;i++)
	{
	  for(char j=1;j<=5+1-i;j++)
	  {
	      cout<<i;
	  }
	  cout<<endl;
	}
	return 0;
}
