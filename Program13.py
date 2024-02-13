#Python Program that accepts a Number from user and check whether it is perfect or not

def sumOfFactors(iValue):
    iSum = 0 

    for i in range(1,iValue):
        if(iValue % i == 0 ):
            iSum = iSum + i 
    return iSum

def checkPerfect(iValue) : 

    iSum = sumOfFactors(iValue)
    
    if(iSum == iValue):
        return True 
    else : 
        return False 

def main():
    bRet = False 
    iNo = int(input("Enter a number : "))

    bRet = checkPerfect(iNo)

    if(bRet == True ):
        print("Number is Perfect")
    else : 
        print("Number is not perfect")

if __name__=="__main__":
    main()