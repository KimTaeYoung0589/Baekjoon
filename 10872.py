# 팩토리얼
def factorial(n: int) -> int:
    n = int(n)
    if n > 0:
        return n * factorial(n-1)
    else:
        return 1


if __name__ == "__main__":
    N = input()
    print(f'{factorial(N)}')
