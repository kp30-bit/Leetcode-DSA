class Solution {
public:
    int findMin(vector<int>& nums) {
        int r = nums.size()-1, l = 0, mid;
        if (!r) return nums[0]; // only one element

        while (l < r)
        {
            mid = l + (r - l) / 2;

            // got a part that is not rotated
            if (nums[l] < nums[r]) return nums[l]; 

//             // mid is larger than right - min is in right side
//             else if (nums[mid] > nums[r]) l = mid + 1;

//             // mid is smaller than right - min is in left side (including mid)
//             else if(nums[mid]< nums[r])r = mid;
            
             int next=(mid+1)%nums.size();
             int prev=(mid+nums.size()-1)%nums.size();
             if(nums[mid]<nums[prev] &&  nums[mid]<nums[next]) return nums[mid];
             else if(nums[mid] >= nums[l]) l=mid+1;
             else r=mid-1;
              
        }
        return nums[l];
    }
};