# Accept N Numbers from user and calculate summation of those N Numbers 

def displayArray(Brr):
    print("Elements of array are : ")
    for i in range(len(Brr)) : 
        print(Brr[i],end = " ") 

def main():
    Arr = list() 

    iLength = int(input("Enter the size of array : "))

    print("Enter the Elements of Array : ")
    for i in range(iLength):
        Arr.append(int(input()))

    displayArray(Arr)

if __name__=="__main__":
    main()
    
    