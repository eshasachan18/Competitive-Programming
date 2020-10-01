class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])!=m.end())
            {
                m[nums[i]]++;
            }
            else{
                m.insert(make_pair(nums[i],1));
            }
        }
        int flag=nums.size()/2;
       for(auto itr=m.begin();itr!=m.end();++itr)
       {
           if(itr->second>flag)
           {return itr->first;}
       }
        return 0;
        
    }
        
    
};
