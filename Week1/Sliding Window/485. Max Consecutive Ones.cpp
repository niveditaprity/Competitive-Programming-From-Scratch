class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int m=0,j;
        for(j=0;j<nums.size();j++)
        {
            if(nums[j]==0)
            {
              m=max(j-i,m);
                i=j+1;
                
            }
        }
       m=max(j-i,m);
        return m;
    }
};
