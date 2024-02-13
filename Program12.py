# Accept Number from user and check Whether that number is perfect or not 
# Input : 6 
# Output : Number is perfect Number 

def checkperfect(iValue):
    iSum = 0 
    for i in range(1,iValue):
        if(iValue % i == 0 ):
            iSum = iSum + i 
    
    if(iSum == iValue ):
        return True  
    else : 
        return False 

def main():
    iNo = 0  
    bRet = False 
    
    iNo = int(input("Enter a number : "))

    bRet = checkperfect(iNo)

    if(bRet == True ):
        print("Number is perfect")
    else : 
        print("Number is not perfect")

if __name__=="__main__":
    main()