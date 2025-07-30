n = int(input())
arr = [int(x) for x in input().split(sep=' ')]
 
if n == 1:
   print(1)
   exit()
 
 
low = 0
high = 1
 
ans = 0
map = {
   arr[low]: 1
}
 
while high < n:
   if arr[high] not in map.keys():
      map[arr[high]] = 1
      high += 1
   else:
      map.clear()
 
      low = high
      
      map[arr[low]] = 1
      
      high = low + 1
      
   if high - low > ans:
      ans = high - low
 
print(ans)