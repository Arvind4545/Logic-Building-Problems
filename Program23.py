# Accept Number from user and Reverse that Number 
# Input : 41 
# OUtput : 14 

def reverseNumber(iValue):
    iRev = 0 
    iRem = 0

    while(iValue!=0):
        iRem = int(iValue % 10 )
        iRev = iRem + iRev * 10 
        iValue = int(iValue / 10 )

    return iRev 

def main():
    iNo = 0 
    iNo = int(input("Enter a Number : "))

    iRet = reverseNumber(iNo) 

    print("Reverssed Number : ",iRet)

if __name__=="__main__":
    main()
