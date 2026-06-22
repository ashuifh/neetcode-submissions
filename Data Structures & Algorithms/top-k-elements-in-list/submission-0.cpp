class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ma;
        for(int i=0;i<nums.size();i++)
        {
            ma[nums[i]]++;
        }
        vector<pair<int,int>> v;
        
        for(auto &it:ma)
        {
            v.push_back({it.first,it.second});
        }

        sort(v.begin(),v.end(),
        [](const pair<int,int>& a,pair<int,int>& b){
            return a.second>b.second;
        });
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
