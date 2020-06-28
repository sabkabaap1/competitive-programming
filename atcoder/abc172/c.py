n, m, k = map(int, input().split())

a = list(map(int, input().split()))
b = list(map(int, input().split()))

i,j = 0,0

cnt = 0

while(i<n and j<m):
    if(a[i]<=b[j] and a[i]<=k):
        k-=a[i]
        i+=1
    elif(b[j]<=a[i] and b[j]<=k):
        k-=b[j]
        j+=1
    else:
        break
    cnt+=1
    

while(i<n and a[i]<=k):
    k-=a[i]
    i+=1
    cnt+=1
    
while(j<m and b[j]<=k):
    k-=b[j]
    j+=1
    cnt+=1

print(cnt)