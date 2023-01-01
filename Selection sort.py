def selection_sort(marks):
    for i in range(len(marks)):
        min=i
        for j in range(i+1,len(marks)):
            if marks[j]<marks[min]:
                min=j
        (marks[i],marks[min])=(marks[min],marks[i])

def bubble_sort(array):
    for i in range(n):
        for j in range(n-i-1):
           if array[j]>array[j+1]:
                marks[j],marks[j+1]=marks[j+1],marks[j]


def top_scores(array):
    print("Top",len(array),"Marks are: ")
    print(*marks[::-1]," ")

n=int(input("Enter Number of Students: "))
marks=[]
for i in range(0,n):
    num=float(input("Enter The Marks Of Student: "))
    marks.append(num)
print(marks)

flag=1
while flag==1:
    print("\n---Menu---")
    print("1.Selection sort of marks ")
    print("2.Bubble Sort of marks ")
    print("3.Display top marks ")
    print("4.Exit")
    choice=int(input("Enter your choice: "))

    if choice==1:
        print("Sorted Array by selection sort is ")
        selection_sort(marks)
        print(marks)

    elif choice==2:
        print("Sorted Array by bubble sort is ")
        bubble_sort(marks)
        print(marks)

    elif choice==3:
        top_scores(marks)

    elif choice==4:
        print("Thank You For Using Program!!!")
        flag=0
    else:
        print("\nInvalid Choice")
        print("Thank You For Using Program!!!")
        flag=0
