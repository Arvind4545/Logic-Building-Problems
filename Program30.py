#Accept N Numbers from user and count Even Numbers from them 

def countEven(Brr) : 
    iCnt = 0 

    for i in Brr:
        if( i % 2 == 0 ):
            iCnt = iCnt + 1 
    
    return iCnt 

def main():
    iLength = 0 
    Arr = list() 

    iLength = int(input("Enter the size of array : ")) 

    print("Enter the elemnets of Array : ") 
    for i in range(iLength):
        Arr.append(int(input()))
    
    iRet = countEven(Arr) 

    print("Number of even Numbers : ",iRet) 

if __name__=="__main__":
    main()