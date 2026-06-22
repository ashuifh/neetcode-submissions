class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          vector<int> ans;
          unordered_map<int,int> ma;
          for(int i=0;i<nums.size();i++)
          {
            if(ma.find(target-nums[i])!=ma.end())
            {
               ans.push_back(ma[target-nums[i]]);
                ans.push_back(i);
                break;
            }
            ma[nums[i]]=i;
          }
          return ans;
    }
};