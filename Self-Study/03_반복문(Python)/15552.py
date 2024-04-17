# 빠른 A + B
import sys
input = sys.stdin.readline

T = int(input())

for i in range(T):
    A, B = map(int, input().split())
    print(A + B)

# 내가 최적화 시킨 코드
# import sys
# input = sys.stdin.readline

# for _ in range(int(input())):
#     A, B = map(int, input().split())
#     print(A + B)

# 최적화 코드
# import os

# def main():
#     it = map(int, os.read(0, os.fstat(0).st_size).split())
#     next(it)
#     output = []
    
#     for a in it:
#         output.append(str(a + next(it)))
#     os.write(1, '\n'.join(output).encode())
#     os._exit(0)

# main()