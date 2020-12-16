class Solution {
public:
    bool isPerfectSquare(int x) {
        int l=1,r=x;
        if(x<1)
        {
            return false;
        }
        if(x==1)
        {
            return true;
        }
        while(l<=r)
        {
           long long int mid=l+ floor((r-l)/2);
            if((mid*mid)==x)
            {
                return true;
            }
            if(mid>x/mid)//mid*mid>x
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return false;
    }
};
