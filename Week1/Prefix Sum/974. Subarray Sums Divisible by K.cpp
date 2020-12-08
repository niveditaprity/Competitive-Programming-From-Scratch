class Solution {
public:
    int subarraysDivByK(vector<int>&nums, int k) {
        int l=0;
        int count=0,sum=0;
        map<int,int>mp;
        vector<int>v;
        v.push_back(0);
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            v.push_back(sum);
        }
        for(auto x:v)
        {
            mp[(x%k+k)%k]++;
        }
        for(auto p:mp)
        {
            count+=p.second*(p.second-1)/2;
        }
        return count;
        
    }
};
