class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            int j=i+1;
            if(nums[i]==nums[j])
            {
                return true;
            }
        }
        return false;
    }
};