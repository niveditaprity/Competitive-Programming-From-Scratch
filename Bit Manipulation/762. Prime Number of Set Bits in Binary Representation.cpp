class Solution {
public:
int countSetBits( int n)
{
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
    
   bool isprime(int n)
   {
      if(n<=1) 
      {
          return false;
      }
       for(int i=2;i<=sqrt(n);i++)
       {
           if(n%i==0)
           {
               return false;
           }
       }
       return true;
   }
    
    int countPrimeSetBits(int left, int right) {
        int count=0;
        for(int j=left;j<=right;j++)
        {
            int x=countSetBits(j);
            
            if(isprime(x))
            {
                count++;
            }
        }
        return count;
    }
};
