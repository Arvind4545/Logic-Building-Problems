# Accept N Numbers from user and a Number , and check the Frequency of that Number is present or not 

def checkFrequency(brr , iValue):
    iCnt = 0

    for i in brr :  
        if ( i == iValue):
            iCnt = iCnt + 1 

    return iCnt 

def main():
    iLength = 0 
    iNo = 0 
    iRet = 0 

    iLength = int(input("Enter the size of Array :  "))
    iNo = int(input("Enter a Number : "))  

    Arr = list() 

    print("Enter the Elements of Array : ") 

    for i in range(iLength):
        Arr.append(int(input())) 

    iRet = checkFrequency(Arr,iNo) 

    print("Frequency is : ",iRet) 

if __name__=="__main__":
    main()
 