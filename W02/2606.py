# 바이러스
from collections import deque
from sys import stdin

nComputer = int(stdin.readline())
cNetwork = int(stdin.readline())

checkVirus = [[False] * (nComputer + 1) for _ in range(nComputer + 1)]

for _ in range(cNetwork):
    a, b = map(int, input().split())
    checkVirus[a][b] = True
    checkVirus[b][a] = True

visited = [False] * (nComputer + 1)

def BFS(start):
    q = deque([start])
    visited[start] = True
    count = 0
    while q:
        start = q.popleft()
        count += 1
        for i in range(1, nComputer + 1):
            if not visited[i] and checkVirus[start][i]:
                q.append(i)
                visited[i] = True
    return count

result = BFS(1) - 1  # 1번 컴퓨터는 바이러스에 감염되므로 제외해야 합니다.
print(result)
