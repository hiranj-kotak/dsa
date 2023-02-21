a=[11,13,20,26,33,38,42]
lb=1
k=int(input("Enter number to search: "))
ub=len(a)
mid = 0
while(lb<=ub):
    mid=(lb+ub)//2
    if(a[mid]==k):
        break
    elif(a[mid]<k):
        lb=mid+1

    else:
        ub=mid-1
    
print(mid)
if(lb>ub):
    print("Item not found")   
             
     