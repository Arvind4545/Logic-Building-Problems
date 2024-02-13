# Accept N Numbers from user and calculate summation of those N Numbers 

def summation(Brr):
    iSum = 0 
    
    for i in range(len(Brr)):
        iSum = iSum + Brr[i] 
    return iSum 

def main():
    Arr = list() 

    iLength = int(input("Enter the size of array : "))

    print("Enter the Elements of Array : ")
    for i in range(iLength):
        Arr.append(int(input()))

    iRet = summation(Arr)

    print("Summation is : ",iRet)

if __name__=="__main__":
    main()
    
    