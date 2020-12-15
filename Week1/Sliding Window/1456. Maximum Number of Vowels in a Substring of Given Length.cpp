class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0;
        int ma=0,count=0;
        for(int j=0;j<k;j++)
        {
            if(s[j]=='a'||s[j]=='i'||s[j]=='e'||s[j]=='o'||s[j]=='u')
            {
                ma++;
            }
        }
        count+=ma;
        for(int j=k;j<s.size();j++)
        {
            if(s[j]=='a'||s[j]=='i'||s[j]=='e'||s[j]=='o'||s[j]=='u')
            {
               ma++; 
             if(s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u')
            {
                 ma--;
                 count=max(ma,count);
                 i++;
            }
                else
                {
                    count=max(ma,count);
                    i++;
                }
            }
            else
            {
             if(s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u')
            {
                 ma--;
                 count=max(ma,count);
                 i++;
            }
                else
                {
                    count=max(ma,count);
                    i++;
                }
            }
    
        }
        return count;
    }
};
