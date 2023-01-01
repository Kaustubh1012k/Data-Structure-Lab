def partition(data,start,end):
    pivot=data[start]
    i=start+1
    j=end
    while True:
        while i<=j and data[i]<=pivot:
            i=i+1
        
        while i<=j and data[j]>=pivot:
            j=j-1
            
        if i<=j:
            data[i],data[j]=data[j],data[i]
        else:
            break
    data[start],data[j]=data[j],data[start]
    
    return j
    
def quicksort(data,start,end):
    if start>=end:
        return
    else:
        part=partition(data,start,end)
        quicksort(data,start,part-1)
        quicksort(data,part+1,end)

data=[]
num=int(input("Enter number of students = "))
for i in range(0,num):
    print("Enter pecentage of student",i+1,"=")
    perc=float(input())
    data.append(perc)
print("Unsorted list is :\n",data)
quicksort(data,0,num-1)
print("Sorted list is :\n",data)
print("Top 5 Scores are :")
i=num
top=[]
while i>num-5:
    t=data[i-1]
    top.append(t)
    i=i-1
print(top)
