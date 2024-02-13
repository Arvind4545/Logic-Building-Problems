# Accept Number from user and Check whether that number is palindrome or not 
# Input : 41     121 
# OUtput : False True


def checkPalindrome(iValue):
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

    iRet = checkPalindrome(iNo) 

    if(iRet == iNo ):
        print("Number is Palindrome")
    else : 
        print("Number is not Palindrome")

if __name__=="__main__":
    main()
