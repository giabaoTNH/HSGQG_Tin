def sol(n):
    if n == 1:
        return 1/2
    return n/(n+1) + sol(n-1)

n = int(input())
print(sol(n))

