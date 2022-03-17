class Solution {
public:
    int longestOnes(vector<int>& A, int K) {
        // int n=nums.size();
        // int i=0,j=0,ans=0,zeroes=0,ones=0;
        // while(i<n && j<n)
        // {
        //     if(nums[j]==0)
        //     {
        //         zeroes++;
        //         j++;
        //     }
        //     while(zeroes>k)
        //     {
        //         if(nums[i]==0) zeroes--;
        //         i++;
        //         j++;
        //     }
        //     ans=max(ans,j-i+1);
        // }
        // return ans;
        
        int zeroCount = 0, l = 0;
        int maxLen = 0;
        for( int r = 0 ; r < A.size() ; ++r ) {
            if( A[ r ] == 0 ) ++zeroCount;
            while( zeroCount > K ) {
                if( A[ l ] == 0 ) --zeroCount;
                ++l;
            }
            maxLen = max( maxLen, r - l + 1 );
        }
        return maxLen;
    }
};