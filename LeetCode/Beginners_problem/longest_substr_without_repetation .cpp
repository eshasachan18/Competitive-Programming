class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_set<char>set;
        int l=0,r=0,ans=0;
        while(r<s.length())
        {
            if(set.find(s[r])==set.end())
            {
                set.insert(s[r]);
                ans=max(ans,r-l+1);r++;
            }
            else
            {
                while(l<r&&s[l]!=s[r])
                {
                    set.erase(s[l]);l++;
                }
                set.erase(s[l]);l++;set.insert(s[r]);
                ans=max(ans,r-l+1);r++;
                
            }
        }
        return ans;
    }
};
