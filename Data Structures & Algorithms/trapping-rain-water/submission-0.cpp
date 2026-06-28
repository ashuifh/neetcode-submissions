class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> suffix(n,0);
        vector<int> prefix(n,0);
        int sum=0;
        prefix[0]=0;
        for(int i=0;i<n-1;i++)
        {
          sum=max(sum,height[i]);
            prefix[i+1]=sum;
        }
        sum=0;
        suffix[n-1]=0;
        for(int i=n-1;i>0;i--)
        {
            sum=max(sum,height[i]);
            suffix[i-1]=sum;    
        }
        sum=0;
        for(int i=0;i<n;i++)
        {
            if(prefix[i]>height[i]&&suffix[i]>height[i])
            {
                sum+=min(prefix[i],suffix[i])-height[i];
            }
        }
        return sum;
    }
};