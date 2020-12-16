class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i=0,j=letters.size();
        while(i<j)
        {
           int m=i+(j-i)/2;
            if(letters[m]<=target)
            {
                i=m+1;
            }
            else
            {
                j=m;
            }
        }
        return letters[i%letters.size()];
        
    }
};
