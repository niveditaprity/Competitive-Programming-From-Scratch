#include <iostream>
using namespace std;

int main() {
	for(int i=1;i<=5;i++)
	{
	    int k=0;
	  for(int j=1;j<=5;j++)
	  {
	      if(5-j+1>i)
	      {
	          cout<<" ";
	      }
	      else
	      {
	          k++;
	          cout<<k;
	      }
      
	  }
	  cout<<endl;
	}
	return 0;
}
