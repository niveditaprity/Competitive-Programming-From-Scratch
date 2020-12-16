class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int l=0,r=arr.size();
        if(r<1)
        {
            return 0;
        }
        while(l<r)
        {
            int mid=l+(r-l)/2;
            if(arr[mid]<target)
            {
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        return l;
    }
};
