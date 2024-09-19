def sol(n):
    if n == 0:
        return 0
    return n+sol(n-1)

n = int(input())
print(sol(n))

