from os import *
from sys import *
from collections import *
from math import *

def check(dis, positions, c, n):
    player = 1
    pre_pos = positions[0]
    for i in range(n):
        if positions[i] - pre_pos >= dis:
            pre_pos = positions[i]
            player += 1
        if player == c:
            return True
    return False

def chessTournament(positions, n, c):
    positions.sort()
    i = 0
    j = positions[n - 1] - positions[0]
    ans = -1
    while i <= j:
        m = i + (j - i) // 2
        if check(m, positions, c, n):
            i = m + 1
            ans = m
        else:
            j = m - 1
    return ans
