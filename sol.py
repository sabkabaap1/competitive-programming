import sys

def showLine(*parameter):
    print('showling: ',parameter)

def sol():
    pass

for _ in range(int(sys.stdin.readline())):
    n = int(input())
    arr = list(map(int, sys.stdin.readline().rstrip().split(' ')))
    print(sol())