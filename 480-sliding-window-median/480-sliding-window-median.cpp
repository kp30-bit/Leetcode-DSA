class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        multiset<int>ms;
        int i=0,j=0;
        vector<double>ans;
        
        while(i<nums.size() && j<nums.size())
        {
            ms.insert(nums[j]);
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                if(k%2==0)
                {
                    int half=(k/2)-1;
                    auto it=ms.begin();
                    int a=0;
                    while(a<half)
                    {
                        it++;
                        a++;
                    }
                    double median=0;
                    median+=*it;
                    it++;
                    median+=*it;
                    median/=2;
                    ans.push_back(median);
                    auto itr=ms.find(nums[i]);
                    ms.erase(itr);
                    i++;
                    j++;
                }
                else{
                    int half=k/2;
                    auto it=ms.begin();
                    int a=0;
                    while(a<half)
                    {
                        it++;
                        a++;
                    }
                    double median=0;
                    median+=*it;
                    ans.push_back(median);
                    auto itr=ms.find(nums[i]);
                    ms.erase(itr);
                    i++;
                    j++;
                }
            }
        }
        return ans;
    }
};