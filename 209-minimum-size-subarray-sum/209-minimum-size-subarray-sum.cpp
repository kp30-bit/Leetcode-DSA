class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int i=0,j=0,ans=INT_MAX,sum=0,flag=0;
        int n=arr.size();
        while(i<n && j<n)
        {
            sum+=arr[j];
//             if(sum>=target)
//             {
                
//             }
            while(sum>=target)
            {
                sum-=arr[i];
                ans=min(ans,j-i+1);
                flag=1;
                i++;
            }
            j++;
        }
        return flag==1?ans:0;
    }
};