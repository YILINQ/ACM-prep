def LCS(a, b):
	# this function computes the length of the Longest-Common-Sequence in a and b.

	n = len(a)
	m = len(b)
	dp = []
	ans = 0
	
	for i in range(n):
		dp.append([0 * m])
		for j in range(m):
			if a[i] == b[j]:
				dp[i+1][j+1] = dp[i][j] + 1
			else:
				dp[i][j] = max(dp[i-1][j], dp[i][j-1])

		if answer < dp[i][j]:
			answer = dp[i][j]

	return answer
