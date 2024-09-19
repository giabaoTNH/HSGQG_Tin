def sol(n):
    if n == 0:
        return 1
    return n*sol(n-1)

n = int(input())
print(sol(n))

