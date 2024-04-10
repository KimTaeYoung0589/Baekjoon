# 개수 세기
import sys
input = sys.stdin.readline

N = int(input())
number = list(map(int, input().split()))
v = int(input())

cnt = 0
for i in range(N):
    if number[i] == v: cnt += 1

print(cnt)

# 다른 풀이
# a = int(input())
# arr = list(map(int, input().split()))
# n = int(input())

# print(arr.count(n))