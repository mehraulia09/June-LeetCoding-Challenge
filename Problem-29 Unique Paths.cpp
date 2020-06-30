/* Day 29 June LeetCode Challenge

   Problem 29
   
   Unique Paths

   A robot is located at the top-left corner of a m x n grid.
   The robot can only move either down or right at any point in time. 
   The robot is trying to reach the bottom-right corner of the grid.
   How many possible unique paths are there?
   
   Example 1:
   Input: m = 3, n = 2
   Output: 3

   Explanation:
   From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
   1. Right -> Right -> Down
   2. Right -> Down -> Right
   3. Down -> Right -> Right
   
*/

int uniquePaths(int m, int n) 
{
    vector<vector<int>> dp(m, vector<int>(n,0));
        
    dp[0][0] = 1;
    for(int i=1; i<n; i++)
        dp[0][i] = dp[0][i-1];
        
    for(int j=1; j<m; j++)
        dp[j][0]= dp[j-1][0];
        
    for(int i=1; i<m; i++)
    {
        for(int j=1; j<n; j++)
        {
            dp[i][j] = dp[i][j-1] + dp[i-1][j];
        }
    }
        
    return dp[m-1][n-1];
}


