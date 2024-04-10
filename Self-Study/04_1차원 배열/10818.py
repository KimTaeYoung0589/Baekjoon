# 최소, 최대
import sys
input = sys.stdin.readline

N = int(input())
N_arr = list(map(int, input().split()))

print(min(N_arr), max(N_arr))

# 다른 풀이
# from sys import stdin
# _, *a = map(int, stdin.buffer.read().split())
# print(min(a), max(a))