class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans=0,i=0,j=0,sum=0;
        int n=arr.size();
        double avg;
        while(i<n && j<n)
        {
            sum+=arr[j];
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                avg=(double)sum/k;
                if(avg>=threshold) ans++;
                sum-=arr[i];
                i++;
                j++;
            }
        }
        return ans;
    }
};