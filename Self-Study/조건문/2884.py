# 알람 시계
import sys
input = sys.stdin.readline

H, M = map(int, input().split())

if H == 0 and 0 <= M < 45: print(abs(H + 23), M + 15)
elif 0 <= M < 45: print(abs(H - 1), M + 15)
else: print(H, (M - 45))

# 다른 분 코드
# H, M = map(int, input().split())
# total = H * 60 + M - 45

# if total < 0: total += 60 * 24

# H = total // 60
# M = total % 60
# print(H, M)