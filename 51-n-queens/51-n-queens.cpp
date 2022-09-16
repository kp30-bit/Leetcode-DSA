class Solution {
public:
    
    
    bool check(int row,int col,vector<string>&board,int n)
    {
        int drow=row,dcol=col;
        //left up diag
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
        row=drow;
        col=dcol;
        //left
        while(col>=0)
        {
            if(board[row][col]=='Q') return false;
            col--;
        }
        //bottom left diagonal
        row=drow;
        col=dcol;
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q') return false;
            row++;
            col--;
        }
        return true;
    }
    
    void solve(vector<string>&board,int col,vector<vector<string>>&ans,int n)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++)
        {
            if(check(row,col,board,n))
            {
                board[row][col]='Q';
                solve(board,col+1,ans,n);
                board[row][col]='.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
		// return empty if n <= 0
        if(n <= 0) return {{}};
        vector<vector<string>>ans;
        vector<string> board(n,string(n,'.'));
        solve(board,0,ans,n);
        return ans;
    }
};