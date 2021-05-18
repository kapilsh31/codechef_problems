for _ in range(int(input())):
    n = int(input())
    s = input()
    v = ['a','e','i','o','u']
    ans = 0
    if n == 1 :
        print(0)
        break
    else:
        for i in range(n):
            if s[i] not in v and i+1 < n and s[i+1] in v:
                ans += 1
    print(ans)
