n=int(input("Enter no. of students: "))
array=[]
i=0
for i in range(n):
    print("\nenter marks of students\n-1 for absent student: ",i+1,end=".")
    item=int(input())
    if item<=100:
      if item<=0:
         if item==-1:
            item=str('A')
         elif item<0:
            print("Invalid")
            break
      array.append(item)
print(array)

#avg
Sum=0
for i in range(len(array)):
   if array[i] !='A':
      Sum=Sum+int(array[i])
avg=Sum/n

#highandlow   
Maxx =array[0]
for i in range(len(array)):
   if array[i] !='A':
      if Maxx<array[i]: 
         Maxx=array[i]

Minn =array[0]
for i in range(n):
   if array[i] !='A':
      if Minn>array[i]:
         Minn=array[i]

#absent
cnt=0
for i in range(n):
   if array[i]=='A':
      cnt+=1

#freq
freq=[]
for i in range(len(array)):
   a=0
   for j in range(len(array)): 
      if array[i]==array[j]:
         a=a+1
   freq.append(a)

high=freq[0]
l=0
for i in range(len(array)):
   if high<freq[i]:
      high=freq[i]
      l=i
      
print("Enter your choice:\n1.Average Score of class\n2.Maximum Score of class\n3.Minimum score of class\n4.Absent sudents in class\n5. highest frequency with marks\n6.All")
ch=int(input())
if ch==1:
   print("Average Score of class is : ",Sum/n)
elif ch==2:
   print("Maximum Score of class is: ",Maxx)
elif ch==3:
   print("Minimum Score of class is: ",Minn)
elif ch==4:
   print("Absent students in class: ",cnt)
elif ch==5:
   print(a,"students got",array[l],"marks")
  
elif ch==6:
   print("Average Score of class is : ",Sum/n)
   print("Maximum Score of class is: ",Maxx)
   print("Minimum Score of class is: ",Minn)
   print("Absent students in class: ",cnt)
   print(a,"students got",array[l],"marks")
else:
   print("EXIT")
