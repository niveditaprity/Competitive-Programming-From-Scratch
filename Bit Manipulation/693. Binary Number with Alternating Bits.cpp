class Solution {
public:
    bool hasAlternatingBits(int n) {
        int r,s;
        while(n>0)
        {
            int r=n%2;
            if(r==s)
            {
                return false;
            }
            s=r;
            n=n/2;
        }
        return true;
    }
};
