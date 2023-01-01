a=[]
r1=int(input("No. of rows :"))
c1=int(input("No. of columnns :"))
print("Enter the elements in first matrix")
for i in range(0,r1):
    c=[]
    for j in range(0,c1):
        elem=int(input())
        c.append(elem)
    a.append(c)
for i in range(0,r1):
    for j in range(0,c1):
        print(a[i][j],end=" ")   
    print()

b=[]
r2=int(input("No. of rows :"))
c2=int(input("No. of columnns :"))
print("Enter the elements second matrix")
for i in range(0,r2):
    d=[]
    for j in range(0,c2):
        ele=int(input())
        d.append(ele)
    b.append(d)
for i in range(0,r2):
    for j in range(0,c2):
        print(b[i][j],end=" ")   
    print()

A=[]
print("Addition: ")
for i in range(0,r1):
    e=[]
    for j in range(0,c1):
        ele=(a[i][j]+b[i][j])
        e.append(ele)
    A.append(e)
for i in range(r1):
    for j in range(c1):
        print(A[i][j],end=" ")
    print()

B=[]
print("Subtraction: ")
for i in range(0,r1):
    f=[]
    for j in range(0,c1):
        ele=(a[i][j]-b[i][j])
        f.append(ele)
    B.append(f)
for i in range(r1):
    for j in range(c1):
        print(B[i][j],end=" ")
    print()
M=[]
for i in range(0,r1):
    h=[]
    for j in range(0,c1):
        ele=0
        h.append(ele)
    M.append(h)
print("Multiplication: ")
for i in range(0,r1):
    for j in range(0,c2):
        for k in range(0,c1):
            M[i][j]+=(a[i][k]*b[k][j])
for i in range(0,r1):
    for j in range(0,c2):
        print(M[i][j],end=" ")
    print()

print("Transpose: ")
for i in range(0,r1):
    for j in range(0,c1):
        M[i][j]=a[j][i]
for i in range(0,r1):
    for j in range(0,c1):
        print(M[i][j],end=" ")
    print()
