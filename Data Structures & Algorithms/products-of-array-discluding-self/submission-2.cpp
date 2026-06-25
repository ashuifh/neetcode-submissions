class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero=0;
        int prod=1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                prod*=nums[i];
            }
            else
            {
                zero++;
            }
        }
        if(zero>1)
        {
            return vector<int>(nums.size(),0);
        }
        vector<int> result(nums.size(),0);
        for(int i=0;i<n;i++)
        {
            if(zero>0)
            {
                if(nums[i]==0)
                {
                    result[i]=prod;
                }
                else
                {
                    result[i]=0;
                }
            }
            else
            {
                result[i]=prod/nums[i];
            }
        }
        return result;
    }
};
