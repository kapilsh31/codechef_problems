n=int(input())
for  i in range(n):
    s=input()
    n=len(s)
    c=s.count("a")
    b=n-c
    if(c>b):
        print(b)
    elif b>c:
        print(c)
    elif b==c:
        print(b)
    else:
        print("0")
