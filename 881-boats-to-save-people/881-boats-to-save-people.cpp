class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        sort(people.begin(),people.end());
        int i=0,j=n-1,boat=0;
        while(i<=j)
        {
            if(people[i]+people[j]<=limit)
            {
                boat++;
                i++;
                j--;
            }
            else{
                j--;
                boat++;
            }
        }
        return boat;
    }
};