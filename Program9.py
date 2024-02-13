# Python program that accepts a Number from user which returns the factorial of that number 
# Input : 5 
# Output : 120 

def calculateFactorial(iValue):
    iFact = 1 
    for i in range(1,iValue+1):
        iFact = iFact * i 

    return iFact 

def main():
    iNo = 0 
    iRet = 0 

    iNo = int(input("Enter a Number : "))

    iRet = calculateFactorial(iNo)

    print("Factorial of a number is : ",iRet)

if __name__=="__main__":
    main()