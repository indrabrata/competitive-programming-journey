# https://cses.fi/problemset/task/1084

n, m, k = map(int, input().split())
desires = list(map(int, input().split()))  
apartments = list(map(int, input().split()))

count = 0

desires.sort()
apartments.sort()

i = 0
j = 0

while i < n and j < m:
  if abs(apartments[j] - desires[i]) <= k:
    count +=1
    i += 1
    j += 1
  elif apartments[j] < desires[i]:
    j += 1
  else :
    i += 1


print(count)

