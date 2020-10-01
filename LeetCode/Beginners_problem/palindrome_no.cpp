class Solution {
public:
    bool isPalindrome(int x) 
    {
        long long num=0;
        for(int i=x;i>0;i=i/10)
        {
            int rem=i%10;
            num=num*10+rem;
        }
        return (num==x);
        
    }
};
