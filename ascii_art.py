import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

l = int(input())
h = int(input())
t = input()

strlst = []

for i in range(h):
    row = input()
    strlst.append(str(row))

# Main solve

A, a = ord('A'), ord('a')
Z, z = ord('Z'), ord('z')

for _ in range(h):
    for c in t:
        oc = ord(c)
        if a <= oc <= z:
            pos = oc - a
        elif A <= oc <= Z:
            pos = oc - A
        else:
            pos = 26 # '?'
        for d in range(l):
            print(strlst[_][l * pos + d], end='')
    print()
        

# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)

# print("answer")

