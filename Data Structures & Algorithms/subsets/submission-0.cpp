class Solution {
public: 
   void solve(vector<vector<int>>& result,vector<int>& subset,int n,vector<int>& nums)
   {
    if(n==nums.size())
    {
        result.push_back(subset);
        return;
    }
      subset.push_back(nums[n]);
        solve(result,subset,n+1,nums);
        subset.pop_back();
        solve(result,subset,n+1,nums);
   }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        int n=0;
        vector<int> subset;
        solve(result,subset,n,nums);
        return result;
    }
};
