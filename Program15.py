# Accept a number and display sum of its non Factors 
# Input : 6 
# Output : 9

def sumOfNonFactors(iValue) :
    iSum = 0 

    for i in range(1,iValue):
        if(iValue % i != 0 ):
            iSum = iSum + i  

    return iSum 

def main():
    iNo = 0  
    iNo = int(input("Enter a Number : "))

    iRet = sumOfNonFactors(iNo)

    print("Summation is : ",iRet)

if __name__=="__main__":
    main()