# 구구단
import sys
input = sys.stdin.readline

N = int(input())

for i in range(1, 10):
    print(N,"*", i, "=", (N * i))