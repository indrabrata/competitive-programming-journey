# Input:
# 3 11
# 1 5 7

n, x = map(int, input().split(sep=' '))
nums = list(map(int, input().split(sep=' ')))

nums.sort(reverse=True)

total = 0
for i, num in enumerate(nums):
  if x == 0:
    break
  
  a = x % num
  x -= a *num
  total += a   
  
print(total)
