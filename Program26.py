# Accept N Numbers from user and diplay them 
# List 

def main():
    iLength = 0 
    Arr = list() 
    iValue = 0 

    iLength = int(input("Enter the Size of Array : "))

    print("Enter the Elements of List : ")

    for i in range(iLength):
        iValue = int(input())
        Arr.append(iValue)

    print("Elements of array are : ") 
     
    for j in range(iLength):
        print(Arr[j],end = " ")

if __name__=="__main__":
    main()