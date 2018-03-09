# Leetcode 53
# Basic DP

def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        dp = []
        dp.append(nums[0])
        answer = dp[0]
        for i in range(1, len(nums)):
            dp.append(max(dp[i-1] + nums[i], nums[i]))
            answer = max(dp[i], answer)

        return answer

