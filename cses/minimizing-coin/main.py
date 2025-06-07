n, x = map(int, input().split())
nums = list(map(int, input().split()))

nums.sort(reverse=True)

total = 0
for i, num in enumerate(nums):
  if x == 0:
    break
  
  a = x % num
  x -= a *num
  total += a   
  
print(total)