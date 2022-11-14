import sys
import math

arr = []
diff = 1e9
n = int(input())
for i in range(n):
    pi = int(input())
    arr.append(pi)

# print(arr)

if n == 1:
    print(arr[0])
else:
    arr.sort()
    for i in range(n - 1):
        d = abs(arr[i] - arr[i + 1])
        diff = min(d, diff)
    print(diff)

