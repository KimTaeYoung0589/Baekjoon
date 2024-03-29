# 색종이 만들기
import sys


def cut(x, y, n):
    global white, blue
    color = paper[x][y]  # 첫 번째 색

    for i in range(x, x+n):
        for j in range(y, y+n):
            if color != paper[i][j]:
                cut(x, y, n // 2)        # 1사분면
                cut(x, y + n // 2, n // 2)      # 2사분면
                cut(x + n // 2, y, n // 2)      # 3사분면
                cut(x + n // 2, y + n // 2, n // 2)    # 4사분면
                return

    if color == 0:
        white += 1
    else:
        blue += 1


if __name__ == '__main__':
    n = int(sys.stdin.readline())
    paper = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]

    white, blue = 0, 0
    cut(0, 0, n)
    print(white, blue, sep='\n')
