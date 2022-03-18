class Solution {
public:
    int longestSubarray(vector<int>& arr) {
        int i=0,j=0,zeroes=0;
        int n=arr.size();
        int ans=0;
        while(i<n && j<n)
        {
            
        
            if(arr[j]==0)
            {
                zeroes++;
            }
            while(zeroes>1)
            {
                if(arr[i]==0) zeroes--;
                i++;
                
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans-1;
        
        //itr1-ans 1 zeroes 1 
        //itr2- 
    }
};