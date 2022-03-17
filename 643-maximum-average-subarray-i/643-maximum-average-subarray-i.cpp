class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=0,sum=0;
        double avg,ans=INT_MIN;
        int n=nums.size();
        while(i<n && j<n)
        {
            sum+=nums[j];
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                avg=(double)sum/k;
                ans=max(ans,avg);
                sum-=nums[i];
                i++;
                j++;
            }
        }
        return ans;
    }
};