import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

# w: width of the building.
# h: height of the building.

w, h = [int(i) for i in input().split()]

n = int(input())  # maximum number of turns before game over.

# x0, y0 = [int(i) for i in input().split()]
x, y = [int(i) for i in input().split()]

L, U = 0,0
R, D = w - 1, h - 1

# game loop

while True:
    dir = input()  # the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, Lor UL)
    if 'L' in dir:
        R = x - 1
    elif 'R' in dir:
        L = x + 1
    if 'D' in dir:
        U = y + 1
    elif 'U' in dir:
        D = y - 1
    x, y = (R - L)// 2 + L, (D - U)//2 + U
    print(x, y)

# Write an action using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)


# the location of the next window Batman should jump to.
# print("0 0")

