# 최댓값
from typing import Any, Sequence


def maximum_of(a: Sequence) -> Any:
    maximum = a[0]
    for i in range(1, len(a)):
        if a[i] > maximum:
            maximum = a[i]
    return maximum


if __name__ == "__main__":
    x = [None] * 9
    for i in range(9):
        x[i] = int(input())

    max_value = maximum_of(x)
    max_index = x.index(max_value) + 1

    print(f"{max_value}")
    print(f"{max_index}")
