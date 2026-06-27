class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> ma;
        int n=numbers.size();    
        vector<int> result;
        for(int i=0;i<n;i++)
        {
            if(ma.find(target-numbers[i])!=ma.end())
            {
                 result.push_back(ma[target-numbers[i]]);
                result.push_back(i+1);
                break;
            }
            ma[numbers[i]]=i+1;
        }
        return result;
    }
};