import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

n = int(input())  # Number of elements which make up the association table.
q = int(input())  # Number Q of file names to be analyzed.

### using dict
d = {}

for i in range(n):
    # ext: file extension
    # mt: MIME type.
    ext, mt = input().split()
    ext = ext.lower()
    d[ext] = mt

for i in range(q):
    fname = input()  # One file name per line.
    res = "UNKNOWN"
    j = len(fname) - 1
    while j > -1:
        if fname[j] == '.':
            break
        j -= 1
    if j ^ -1:
        fname = fname[j + 1:].lower()
        if fname in d:
            res = d[fname]
    print(res)
    

# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)

# For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.


### print("UNKNOWN")
