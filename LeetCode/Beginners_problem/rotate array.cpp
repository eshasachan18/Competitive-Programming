#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define veci(v) vector<int>v;
#define vecll(v) vector<long long>v;
#define for0(num) for(long long i = 0; i < num; i++)
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define srtGreat(v) sort(all(v), greater<ll>())
class Solution {
    vector<int> reverse(vector<int>&a,int start,int end)
    {
        
        while(start<end && end<a.size())
        {
            swap(a[start],a[end]);
                start++;end--;
        }
        return a;
    }
public:
    void rotate(vector<int>& nums, int k) 
    {k=k%nums.size();
        reverse(nums,0,nums.size()-1);
        reverse(nums,0,k-1);
        reverse(nums,k,nums.size()-1);
        
    }
};
