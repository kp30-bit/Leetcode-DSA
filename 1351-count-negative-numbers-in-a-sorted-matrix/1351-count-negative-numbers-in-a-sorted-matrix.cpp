class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        // int count=0;
        // int j=0;
        // int i=grid.size()-1;
        // while(i>=0 && i<grid.size() && j>=0 && j<grid[0].size())
        // {
        //     if(grid[i][j]<0)
        //     {
        //         count+=grid.size()-i;
        //         count+=grid[0].size()-j;
        //     }
        //     else if(grid[i][j]>=0)
        //     {
        //         i++;
        //         j++;
        //     }
        // }
        // return count;
        int m=grid.size();
        int n=grid[0].size();
        
        int i=m-1;
        int j=0;
		// to start from the grid[m-1][0] position
        int count=0;
        
        while(i>=0 && i<m && j>=0 && j<n){
            if(grid[i][j] < 0){
                count = count + (n-j); //when the first occurrence of a number in a row is -ve, all following numbers will be -ve. So, add their count.
                i=i-1; //then move to the above row
            }
            else{
                j=j+1; //else move to the right (i.e. to the next column)
            }
                
        }       
        
        return count;
    }
};