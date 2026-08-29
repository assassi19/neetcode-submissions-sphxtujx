class Solution {
public:
    int calcUniquePath(int row, int col, int m, int n, vector<vector<int>>&dp){
        if(row == m && col == n){
            return 1;
        }
        else if(row > m || col > n){
            return 0;
        }
        if(dp[row][col] != -1){return dp[row][col];}
         return dp[row][col] = calcUniquePath(row, col+1, m, n, dp)+ calcUniquePath(row+1, col, m, n, dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        return calcUniquePath(0, 0, m-1, n-1, dp);
    }
};
