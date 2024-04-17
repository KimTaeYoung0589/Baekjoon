# 줄 세우기
import sys
from collections import deque

input = sys.stdin.readline

n, m = map(int, input().split())
adjacent = [[]for _ in range(n+1)]

in_degree = [0]*(n+1) # 진입 차수 리스트
in_degree[0] = -1

for i in range(m):
    a,b = map(int, input().split()) # a -> b
    adjacent[a].append(b)
    in_degree[b] += 1

queue = deque()
for i in range(1, n+1):
    if in_degree[i] == 0:
        queue.append(i)

while queue:
    node = queue.popleft()
    print(node,end=' ')
    for i in adjacent[node]:
        if in_degree[i] == 1:
            queue.append(i)
        in_degree[i] -= 1