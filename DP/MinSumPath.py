# Leetcode 64 
# medium

def minPathSum(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        m = len(grid)
        n = len(grid[0])
        dp = []
        row = []
        # stupid way to init.....
        for i in range(n):
            row.append(0)
        for i in range(m):
            dp.append(row.copy())
        
        dp[0][0] = grid[0][0]
        
        for i in range(1, n): # init first row
            dp[0][i] = dp[0][i-1] + grid[0][i]
        for i in range(1, m): # init first col
            dp[i][0] = dp[i-1][0] + grid[i][0]
        
        for i in range(1, m):
            for j in range(1, n):
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j]
