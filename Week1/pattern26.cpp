#include <iostream>
using namespace std;

int main() {
	for(int i=5;i>=1;i--)
	{
	  for(int j=5;j>=1;j--)
	  {
	      if(j>i)
	      {
	          cout<<" ";
	      }
	      else
	      {
	      cout<<i;
	      }
      
	  }
	  cout<<endl;
	}
	return 0;
}
