def sol(n):
    if n == 1:
        return 2.0
    return 1/n * (n+1) + sol(n-1)

n = int(input())
print(sol(n))

