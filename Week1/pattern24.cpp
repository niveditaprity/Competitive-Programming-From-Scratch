#include <iostream>
using namespace std;

int main() {
     char c='A';
	for(int i=1;i<=5;i++)
	{
	  for(int j=1;j<=5;j++)
	  {
	      if(5-j+1>i)
	      {
	          cout<<" ";
	      }
	      else
	      {
	          cout<<c;
	      }
      
	  }
	  c++;
	  cout<<endl;
	}
	return 0;
}
