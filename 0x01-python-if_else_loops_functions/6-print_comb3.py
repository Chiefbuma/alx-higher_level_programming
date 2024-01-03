#!/usr/bin/python3
for k in range(0, 8):
    for t in range(k + 1, 10):
        print("{:d}{:d}".format(k, t), end=', ')
print("{:d}{:d}".format(k + 1, t))
