t = int(input())

def lcmstring(x, y):
    m = len(x)
    n = len(y)
    cnt1 = x
    cnt2 = y
    
    while m != n:
        if m < n:
            cnt1 += x
            m += len(x)  # Increment m by the length of x
        else:
            cnt2 += y
            n += len(y)  # Increment n by the length of y

    if cnt1 == cnt2:
        return cnt1
    else:
        return -1

while t > 0:
    a = str(input())
    b = str(input())

    if lcmstring(a, b) != -1:
        print(lcmstring(a, b))
    else:
        print(-1)

    t = t - 1
