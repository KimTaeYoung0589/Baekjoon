# 별 찍기 -2
import sys
input = sys.stdin.readline

N = int(input())

for i in range(1, N + 1):
    print(" " * (N - i) + "*" * i)

# 다른 풀이
# n = int(input())
# [print(' ' * (n - i) + '*' * i)for i in range(1,n + 1)]