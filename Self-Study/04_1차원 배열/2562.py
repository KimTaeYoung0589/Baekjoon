# 최댓값
import sys
input = sys.stdin.readline

N = list(map(int,(input() for _ in range(9))))

print(max(N))
print(N.index(max(N)) + 1)