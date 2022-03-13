N = int(input())
p = [int(input()) for i in range(N)]
print(sum(p) - int(max(p) / 2))
