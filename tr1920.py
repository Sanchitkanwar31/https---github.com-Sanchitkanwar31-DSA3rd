t = int(input())
for _ in range(t):
    lo = float('-inf')
    hi = float('inf')
    mid = 0
    ans = set()
    n = int(input())
    for _ in range(n):
        a, x = map(int, input().split())
        if a == 1:
            lo = max(lo, x)
        elif a == 2:
            hi = min(hi, x)
        elif a == 3:
            ans.add(x)
    t = (hi - lo)+1
    for i in (ans):
        if lo<=i<=hi:
            t -= 1

    
    print(max(0,t))
