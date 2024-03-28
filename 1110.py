# 더하기 사이클
import sys

n = int(sys.stdin.readline())
N = n  # n == n을 확인 하기 위한 변수 선언

cnt = 0
if n >= 0 and n <= 99:
    for _ in range(1, 1000000):  # 무한 루프 빠지지 않게 설정
        a = n // 10  # 십의 자리
        b = n % 10  # 일의 자리
        n = 10 * b + (a + b) % 10
        cnt += 1
        if n == N:
            break

print(cnt)
