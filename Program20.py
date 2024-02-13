#Accept a Number from user and count number of Digits 
# Input : 10 
# Output : 2 

def countDigits(iValue):
    iCnt = 0 

    while(int(iValue)!=0):
        iCnt = iCnt + 1 
        iValue = iValue / 10 

    return iCnt 

def main():
    iNo = 0 
    iRet = 0

    iNo = int(input("Enter a number : "))

    iRet = countDigits(iNo) 

    print("Number of Digits are : ",iRet) 

if __name__=="__main__":
    main()