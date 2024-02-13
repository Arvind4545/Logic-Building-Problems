# accept a number from user and return maximum Digit of it 

def maxDigit(iValue):
    iMax = 0 
    iDigit = 0 

    while(int(iValue)!=0):
        iDigit = int(iValue % 10 )
        if(iDigit>iMax):
            iMax = iDigit 
        if(iDigit == 9 ):
            break 
        iValue = int(iValue/10)

    return iMax 
        
def main():
    iNo = 0 

    iNo = int(input("Enter a Number : "))

    iRet = maxDigit(iNo)

    print("Maximum Digit is : ",iRet)

if __name__=="__main__":
    main()