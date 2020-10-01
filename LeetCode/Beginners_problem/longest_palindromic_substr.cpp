class Solution {
public:
    string longestPalindrome(string s) 
    {
        int rr,cc,ans=-1;
        int n=s.length();
        if(n==0){return "";}
        vector<vector<int>>a(n,vector<int>(n,0));
        int i=0,ml=1;
        while(i<n)
        {
            a[i][i]=1;i++;
        }
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1]){a[i][i+1]=1;ml=2;rr=i;cc=i+1;}
        }
     for(int k=3;k<=n;k++)
     {
         for(int i=0;i<n;i++)
         {
             int j=i+k-1;
             if(j<n&&s[i]==s[j]&&a[i+1][j-1]==1)
             {
                 a[i][j]=1;
                 if(ml<k){ml=k;rr=i;cc=j;}
             }
         }
     }string temp="";
     if(ml==1){temp+=s[0];return temp;}
     else{
         for(int i=rr;i<=cc;i++)
         {
             temp+=s[i];
         }
     }
     return temp;
    }
};
