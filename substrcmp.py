
'''def solve():
    n=int(input())
    m=int(input())
    x=input()
    s=input()
    for i in range(n+m):
        if s in x:
            print(i)
            return
        x=x*2
    print(-1)

for _ in range(int(input())):
     solve()'''
'''def solve():
    n, m = map(int, input("enter nm").split())
    x = input("x")
    s = input("s")
    for i in range(6):
        if s in x:
            print(i)
            return
        x += x
    print(-1)


for _ in range(int(input("enter t"))):
    solve()
'''

t=int(input("Enter t"))

for i in range(t):
    a,b,c,d = sorted(map(int, input().split()))
    if(a==0):
        a=10
    elif(b==0):
        b=10
    elif(c==0):
        c=10
    elif(d==0):
        d=10
    y=abs((a-1)+(b-a)+(c-b)+(d-c))
    print(y)