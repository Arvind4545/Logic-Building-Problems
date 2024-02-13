# Accept N Numbers from user and a Number , and check whether that Number is present or not 

def checkOccurrence(brr , iValue):
    bFlag = False 

    for i in brr :  
        if ( i == iValue):
            bFlag = True
            break

    return bFlag 

def main():
    iLength = 0 
    iNo = 0 

    iLength = int(input("Enter the size of Array :  "))
    iNo = int(input("Enter a Number : "))  

    Arr = list() 

    print("Enter the Elements of Array : ") 

    for i in range(iLength):
        Arr.append(int(input())) 

    bRet = checkOccurrence(Arr,iNo) 

    if(bRet == True ):
        print("Present...") 
    else :
        print("Absent")

if __name__=="__main__":
    main()
 