import sys
import math

# Don't let the machines win. You are humanity's last hope...

width = int(input())  # the number of cells on the X axis
height = int(input())  # the number of cells on the Y axis
G = []
def checker(g, h, w, height, width):
    P = [w, h]
    R = [-1, -1]
    D = [-1, -1]
    for i in range(w + 1, width):
        if g[h][i] == '0':
            R = [i, h]
            break
    for i in range(h + 1, height):
        if g[i][w] == '0':
            D = [w, i]
            break
    print(' '.join(str(x) for x in (P + R + D)))
for i in range(height):
    line = input()  # width characters, each either 0 or .
    G.append(line)
for h in range(height):
    for w in range(width):
        if G[h][w] == '0':
            checker(G, h, w, height, width)


# Write an action using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)


# Three coordinates: a node, its right neighbor, its bottom neighbor
print("0 0 1 0 0 1")

