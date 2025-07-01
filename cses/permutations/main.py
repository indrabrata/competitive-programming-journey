# https://cses.fi/problemset/task/1070/

n = int(input())
nums = [i + 1 for i in range(n)]

if n == 1:
  print(1)
elif n <= 3:
  print("NO SOLUTION")
else:
  evens = [str(i) for i in range(2, n+1, 2)]
  odds = [str(i) for i in range(1, n+1, 2)]
  print(' '.join(evens + odds))
