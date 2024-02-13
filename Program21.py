#Accept a Number from user and display sum of Digits 
# Input : 10 
# Output : 1 

def countDigits(iValue):
    iCnt = 0 
    iSum = 0 

    while(int(iValue)!=0):
        iRem = iValue % 10 
        iSum = iSum + iRem 
        iValue = iValue / 10 

    return int(iSum)  

def main():
    iNo = 0 
    iRet = 0

    iNo = int(input("Enter a number : "))

    iRet = countDigits(iNo) 

    print("Sum of Digits is : ",iRet) 

if __name__=="__main__":
    main()