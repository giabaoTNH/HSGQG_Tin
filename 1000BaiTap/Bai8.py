def sol(n):
    if n == 1:
        return 1/2
    return n/(n+1) + sol(n-2)

n = int(input())
print(sol(2*n + 1))
