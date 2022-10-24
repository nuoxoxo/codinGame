import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

mx = 1e9
flag = False

n = int(input())  # the number of temperatures to analyse

if n == 0:
    mx = n
for i in input().split():
    # t: a temperature expressed as an integer ranging from -273 to 5526
    t = int(i)
    if abs(t) <= abs(mx):
        if abs(t) == abs(mx) and t < 0 and mx > 0:
            flag = True
        mx = t

# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)

# print("result")
print(abs(mx) if flag == True else mx)

