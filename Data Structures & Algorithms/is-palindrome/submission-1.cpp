class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string ans="";
        
        for(int i=0;i<n;i++)
        {
            if(isalnum(s[i]))
            {
                ans+=s[i];
            }
        }
        for(int i=0;i<ans.size();i++)
        {
           ans[i]= tolower(ans[i]);
        }      
        int j=ans.size()-1;
        for(int i=0;i<ans.size()/2;i++)
        {
            if(ans[i]!=ans[j--])
            {
                return false;
            }
        }
    return true;
    }
};