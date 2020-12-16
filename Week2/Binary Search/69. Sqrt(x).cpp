class Solution {
public:
    int mySqrt(int x) {
        int l=1,r=x;
        if(x==0||x==1)
        {
            return x;
        }
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(mid>x/mid)//mid*mid>x
            {
                r=mid-1;
            }
            else
            {
                if((mid+1)>x/(mid+1))//mid+1*mid+1>x
                {
                    return mid;
                }
                l=mid+1;
            }
        }
        return -1;
        
    }
};
