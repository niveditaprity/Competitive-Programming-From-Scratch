int equilibriumPoint(long long a[], int n) {
int total=0;
for(int i=0;i<n;i++)
{
    total+=a[i];
}
if(n==1)
{
    return 1;
}
int sum=0;
for(int i=0;i<n-1;i++)
{
  total-=a[i];
  if(total==sum)
  {
      return i+1;
  }
  sum+=a[i];
}
return -1;

    // Your code here
}
