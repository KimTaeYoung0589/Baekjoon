# ??!
import sys

# id = input()
id = sys.stdin.readline().rstrip()

if len(id) <= 50 and id.islower():
    print(f'{id}??!')