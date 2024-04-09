# 코딩은 체육과목 입니다
import sys
input = sys.stdin.readline

N = int(input())

if N % 4 == 0: print("long " * (N//4) + "int")

# 최적화 코드
# print(int(input())//4*'long '+'int')