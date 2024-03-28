# 부분수열의 합
import sys
import itertools

n, s = map(int, sys.stdin.readline().split())  # 정수의 갯수: n, 정수: s
nList = list(map(int, sys.stdin.readline().split()))
cnt = 0

for i in range(1, n+1):  # 부분집합의 길이를 1부터 n까지 설정
    sub = itertools.combinations(nList, i)  # 조합 함수 사용

    for subset in sub:
        if sum(subset) == s:  # sub의 합이 s과 같으면
            cnt += 1

print(cnt)
