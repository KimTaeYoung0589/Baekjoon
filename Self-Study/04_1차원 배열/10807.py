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