class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int>m;
        vector<int>out;
        for(int i=0;i<nums.size();i++)
        {
            int diff=target-nums[i];
            if(m.find(diff)!=m.end()&&m.find(diff)->second!=i)
            {
               out.push_back(m.find(diff)->second);
                  out.push_back(i);
              
            }
            else
            {
                m.insert(make_pair(nums[i],i));
            }
        }
        return out;
    }
};
