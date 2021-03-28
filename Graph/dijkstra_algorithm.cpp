#include <bits/stdc++.h>
#define n 9
using namespace std;
#define n 9
int findmin(int value[],bool processed[])
{
    int m=INT_MAX,minindex;
    for(int i=0;i<n;i++)
    {
        if(processed[i]==false&&value[i]<=m)
        {
            m=value[i];
            minindex=i;
        }
    }
    return minindex;
}
void dijkstra(int v[n][n])
{
int parent[n];
bool processed[n];
int value[n];
for(int i=0;i<n;i++)
{
    processed[i]=false,value[i]=INT_MAX;
}
value[0]=0;
parent[0]=-1;
for(int i=0;i<n-1;i++)
{
  int m=findmin(value,processed);  
  processed[m]=true;
  for(int j=0;j<n;j++)
  {
   if(v[m][j]!=0&&processed[j]==false&&value[m]!=INT_MAX && (value[m]+v[m][j])<value[j])
   {
       value[j]=value[m]+v[m][j];
       parent[j]=m;
   }
  }
  
}
for(int i=1;i<n;i++)
{
    cout<<"U->V: "<<parent[i]<<"->"<<i<<v[parent[i]][i]<<"\n";
}

}

int main() {
	int graph[n][n] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
						{ 4, 0, 8, 0, 0, 0, 0, 11, 0 },
						{ 0, 8, 0, 7, 0, 4, 0, 0, 2 },
						{ 0, 0, 7, 0, 9, 14, 0, 0, 0 },
						{ 0, 0, 0, 9, 0, 10, 0, 0, 0 },
						{ 0, 0, 4, 14, 10, 0, 2, 0, 0 },
						{ 0, 0, 0, 0, 0, 2, 0, 1, 6 },
						{ 8, 11, 0, 0, 0, 0, 1, 0, 7 },
						{ 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
            dijkstra(graph);
	return 0;
}
