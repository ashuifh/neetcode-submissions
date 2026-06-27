class Solution {
public:
    int maxArea(vector<int>& heights) {
         int n=heights.size();
         int maxi=0;
         for(int i=0;i<n-1;i++)
         {
            int j=i;
            int k=n-1;
            while(j<k)
            {
                int sum=0;
                if(heights[j]==heights[k])
                {
                    sum+=(k-j)*heights[j];
                }
                else
                {
                    int l=min(heights[j],heights[k]);
                    sum+=(k-j)*l;
                }
                maxi=max(maxi,sum);
                k--;
            }
         }
         return maxi;
    }
};
