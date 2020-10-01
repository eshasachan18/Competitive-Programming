class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        if(strs.size()==0){return "";}
        else if(strs.size()==1){return strs[0];}
        string pref=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            string b=strs[i];
            b=b.substr(0,min(pref.length(),b.length()));
            int j=0;
            while(j<pref.size()&&j<b.size())
            {
                if(pref[j]!=b[j])
                {break;}j++;
            }
            pref=pref.substr(0,j);
        }
        return pref;
    }
    
};
