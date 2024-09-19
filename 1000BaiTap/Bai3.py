def sol(n):
    if n == 1:
        return 1/1
    return 1/n + sol(n-1)

n = int(input())
print(sol(n))

