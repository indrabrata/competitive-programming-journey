# Input:
# 3 11
# 1 5 7

import sys

if __name__ == "__main__":
  n, x = map(int, input().split(sep=' '))
  nums = list(map(int, input().split(sep=' ')))

  dp = [sys.maxsize] * (x+1)
  dp[0] = 0
  for i in range (1, n+1):
    for j in range (nums[i - 1], x+1):
      dp[j] = min(dp[j], dp[j - nums[i - 1]] + 1)
  
  ans = dp[x] if dp[x] < sys.maxsize else -1
  
  
  print(ans)
  
