#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
string s[n];
for(int i=0;i<n;i++)
{
	getline(cin,s[i]);
}
int days[31]={0};
for(int i=0;i<n;i++)
{
	int weight=0;
	if(s[i][0]=='G')
	{
		weight=2;
	}
	else
	{
		weight=1;
	}
	string word;
	stringstream str(s[i]);
	while(str>>word)
	{
  if(word>="1"&&word<="30")
   {
	int number;
	number=stoi(word);
	days[number]+=weight;
    }
	}
}
int max=days[0],index=0;
for(int i=1;i<31;i++)
{
	if(days[i]>max)
	{
		max=days[i];
		index=i;
	}
}
int maxd=0;
for(int i=1;i<31;i++)
{
	if(max==days[i])
	{
		maxd++;
	}
}
if(maxd>1)
{
	cout<<"No Date";
}
else if(index==19||index==20)
{
	cout<<"Date";
}
else{
	cout<<"No Date";
}

	return 0;
}
