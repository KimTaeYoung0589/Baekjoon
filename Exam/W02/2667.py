import sys
from collections import deque

def BFS(x, y):
    queue = deque([(x, y)])
    visited[x][y] = True
    h_cnt = 0 # 현재 단지 내 집의 개수
    
    while queue:
        cx, cy = queue.popleft()
        h_cnt += 1 # 집 개수 증가

        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = cx + dx, cy + dy
            # 다음 위치가 유효하고 방문하지 않았으며, 집이 있는 경우
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny] and graph[nx][ny] == 1:
                queue.append((nx, ny)) # 다음 위치를 큐에 추가
                visited[nx][ny] = True # 방문 표시
    
    return h_cnt

# main 함수
input = sys.stdin.readline

N = int(input())

graph = []
for _ in range(N):
    graph.append(list(map(int, input().strip())))

visited = [[False] * N for _ in range(N)] # 방문처리 2차원 배열
d_cnt = 0 # 총 단지 수를 카운트 할 변수
h_cnt = []

for i in range(N):
    for j in range(N):
        # 집이 있고 방문하지 않은 경우
        if graph[i][j] == 1 and not visited[i][j]:
            d_cnt += 1 # 새로운 단지 시작
            h_cnt.append(BFS(i, j)) # BFS로 연결된 집을 찾아 집의 개수를 구하고 리스트에 추가

print(d_cnt)

for count in sorted(h_cnt):
    print(count)