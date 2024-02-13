#Python Program that accepts a Number from user and display sum of Factors  
# 10 
# Output : 2 5 

def sumOfFactors(iValue):
    iSum = 0

    for i in range(2,iValue):
        if(iValue % i == 0 ):
            iSum = iSum + i 

    return iSum 

def main():
    iNo = int(input("Enter a number : "))

    iRet = sumOfFactors(iNo)

    print("Summation of Factors is : ",iRet)

if __name__=="__main__":
    main()