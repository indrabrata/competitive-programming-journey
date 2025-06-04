n = int(input())
distinct_numbers: set[int] = set()

for i in range(n):
   distinct_numbers.add(int(input()))
   
print(len(distinct_numbers))