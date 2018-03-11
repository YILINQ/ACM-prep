# A super easy probelm
# Happy weekends~
# Notice that this could be done using recursion, 
# but it will cause a Timeout.

def ClimbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        dp = [1, 2]
        for i in range(2, n):
            dp.append(dp[i-1] + dp[i-2])
        
        return dp[n-1]
