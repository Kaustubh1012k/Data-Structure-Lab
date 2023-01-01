main=[]  
def longest():
    n=int(input("Enter number of strings :"))
    for i in range(n):
        word=input("Enter string "+str(i+1)+":")
        main.append(word)
    print("The given array is :",main)
    print("The longest string is :",max(main,key=len)) 
    
def frequency():
    string=input("Enter string :")
    char=input("Enter character to check :")
    freq=0
    for i in string:
        if(char==i):
            freq=freq+1 
    if(freq==0):
            print("The given character does'nt appear in the given word.")
    else:
        print("\'",char,"\'","appears",freq,"times\n")

    
def palindrome():
    str1=input("Enter string:")
    str2=str1.replace(" ","")
    str3=str2[::-1]
    
    if(str2==str3):
        print("\'",str1,"\'","is a palindrome.\n")
    else:
        print("\'",str1,"\'","is not a palindrome.\n")
        
def first_appearance():
    string=input("Enter string :")
    substring=input("Enter substring :")
    index=string.find(substring)
    if index==-1:
        print("Given substring is not a part of the given string.")
    else:
        print("\"",substring,"\"","first found at position",index,".\n")
    
def occurences():
    string=input("Enter string :")
    count={}
    for i in string:
        if i in count:
            count[i]=count[i]+1 
        else:
            count[i]=1 
    print(count)

while(1):
    print("\nOperations :-")
    choice=int(input("1.Display longest string \n2.Check frequency of occurence \n3.Check for palindrome \n4.Check for first appearance of substring \n5.Check for occurence of each word \n6.Exit \nEnter your choice :"))
    
    if choice==1:
        longest()
    elif choice==2:
        frequency()
    elif choice==3:
        palindrome()
    elif choice==4:
        first_appearance()
    elif choice==5:
        occurences()
    elif choice==6:
        print("Thank you for using this program !")
        break
    else:
        print("Please enter a valid choice:")
