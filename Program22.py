#Accept a Number from user and count Even Digits from that number 
# Input : 10 
# Output : 1 

def countEvenDigits(iValue):
    iCnt = 0 

    if(iValue == 0 ):
        return 1 

    while(int(iValue)!=0):
        iRem = int(iValue % 10 )
        if(int(iRem % 2) == 0):
            iCnt = iCnt + 1 
        iValue = int(iValue / 10 )

    return iCnt

def main():
    iNo = 0 
    iRet = 0

    iNo = int(input("Enter a number : "))

    iRet = countEvenDigits(iNo) 

    print("Number of Even Digits is : ",iRet) 

if __name__=="__main__":
    main()