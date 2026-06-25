class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        unordered_set<int> sa;
        if(n==0)
        {
            return 0;
        }
        for(int i=0;i<n;i++)
        {
            sa.insert(nums[i]);
        }
        vector<int> b;
        for(auto it:sa)
        {
            b.push_back(it);
        }
        sort(b.begin(),b.end());
        int maxi=1;
        int k=1;
        for(int i=0;i<b.size()-1;i++)
        {
            if(abs(b[i]-b[i+1])==1)
            {
                k++;
                maxi=max(maxi,k);
            }
            else
            {
                k=1;
            }
        }
        return maxi;
    }
};
