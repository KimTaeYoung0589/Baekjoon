# 계단 오르기
# import sys

# input = sys.stdin.readline

# N = int(input())

# # 계단의 숫자를 초기화 / 1층은 index 1에 저장
# stairs = [0] * 301
# for i in range(1, N + 1):
#     stairs[i] = int(input())

# # dp 배열을 초기화
# dp = [0] * 301
# dp[1] = stairs[1]
# dp[2] = stairs[1] + stairs[2]
# dp[3] = max(stairs[1] + stairs[3], stairs[2] + stairs[3])

# for i in range(4, N + 1):
#     dp[i] = max(dp[i - 3] + stairs[i - 1] + stairs[i], dp[i - 2] + stairs[i])

# print(dp[N])

import sys

input = sys.stdin.readline

N = int(input())

# 계단의 숫자를 입력 받음
stairs = [int(input()) for _ in range(N)]

# dp 배열을 초기화
DP = [0] * (N + 1)
DP[1] = stairs[0]  # 1층부터 시작하므로 stairs index는 0부터 시작

for i in range(2, N + 1):
    DP[i] = max(DP[i - 2] + stairs[i - 1], DP[i - 3] + stairs[i - 2] + stairs[i - 1])

print(DP[N])