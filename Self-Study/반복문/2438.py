# 별 찍기 -1
import sys
input = sys.stdin.readline

N = int(input())

for i in range(1, N + 1):
    print("*" * i )

# 최적화 코드
# for i in range(int(input()) + 1): print('*' * (i))