class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        // int i=0,j=0,n=nums.size(),odd=0;
        // int count=0,ans=0;
        // while(i<n && j<n)
        // {
        //     if(nums[j]%2!=0)
        //     {
        //         odd++;
        //         if(odd>=k)
        //         {
        //             count=1;
        //             while(nums[i]%2==0)
        //             {
        //                 count++;
        //                 i++;
        //             }
        //             ans+=count;
        //         }
        //     }
        //     else if(odd>=k)
        //     {
        //         ans+=count;
        //     }
        //     j++;
        // }
        // return ans;
        int j = 0, odd = 0, count = 0, total = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] & 1) {
                odd++;
                if (odd >= k) {
                    count = 1;
                    while (!(nums[j++] & 1)) count++;
                    total += count;
                }
            } else if (odd >= k) total += count;
        }
        return total;
    }
};