def sol(n):
    if n == 2:
        return 1/2
    return 1/n + sol(n-2)

n = int(input())
print(sol(n*2))

