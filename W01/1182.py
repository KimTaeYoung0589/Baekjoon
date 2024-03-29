# 부분수열의 합
# itertools 라이브러리 사용
# import sys
# import itertools

# n, s = map(int, sys.stdin.readline().split())  # 정수의 갯수: n, 정수: s
# nList = list(map(int, sys.stdin.readline().split()))
# cnt = 0

# for i in range(1, n+1):  # 부분집합의 길이를 1부터 n까지 설정
#     sub = itertools.combinations(nList, i)  # 조합 함수 사용

#     for subset in sub:
#         if sum(subset) == s:  # sub의 합이 s과 같으면
#             cnt += 1

# print(cnt)

# itertools 라이브러리 사용하지 않음
from sys import stdin
input = stdin.readline
n, s = map(int, input().split())
num = list(map(int, input().split()))
cnt = 0
arr = []


def solve(start):
    global cnt
    if sum(arr) == s and len(arr) > 0:
        cnt += 1

    for i in range(start, n):
        arr.append(num[i])
        solve(i + 1)
        arr.pop()


solve(0)
print(cnt)
