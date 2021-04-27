# cook your dish here

def check(n):
    if n>2019 or n<2010:
        print("NOT HOSTED")
    elif n==2010 or n==2015 or n==2016 or n==2017 or n==2019:
        print("HOSTED")
    else:
        print("NOT HOSTED")
        


t=int(input())
for i in range(t):
    n=int(input())
    check(n)
