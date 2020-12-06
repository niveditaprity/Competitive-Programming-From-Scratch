bool subArrayExists(int arr[], int n)
{
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=arr[i]+prefix[i-1];
    }
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[prefix[i]]++;
    }
for(auto x:m)
{
    if(x.second>1||x.first==0)
    {
        return true;
    }
}
    return false;
   //Your code here
}
