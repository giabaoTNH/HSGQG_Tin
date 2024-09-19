def sol(n):
    if n == 1:
        return 1/1
    return 1/n + sol(n-2)

n = int(input())
print(sol(n*2+1))

