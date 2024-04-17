# X보다 작은 수
import sys
input = sys.stdin.readline

N, X = map(int, input().split())
arr = list(map(int, input().split()))

for i in range(N):
    if X > arr[i]: print(arr[i], '', end = '')

# 다른 풀이
# n, x = map(int, input().split())
# answer = ' '.join([i for i in input().split() if int(i) < x])
# print(answer, end = '')