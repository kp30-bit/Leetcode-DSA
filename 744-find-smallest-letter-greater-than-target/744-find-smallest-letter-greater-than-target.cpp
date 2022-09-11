class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char target) {
        int n=arr.size();
        int l=0,r=n-1;
        char temp='z';
        if (arr.back() <= target) return arr.front();
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(arr[m]<=target)
            {
                l=m+1;
            }
            else if(arr[m]>target)
            {
                if(arr[m]<temp)
                {
                    temp=arr[m];
                }
                r=m-1;
            }
        }
        return temp;
    }
};