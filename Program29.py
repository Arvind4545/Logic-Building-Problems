# Accept Marks from user and return the Average 

def calculateAverage(Brr):
    fAvg = 0.0 
    fSum = 0.0 

    for i in range(len(Brr)):
        fSum = fSum + Brr[i] 

    fAvg = fSum / len(Brr) 

    return fAvg 

def main():
    Arr = list() 
    fRet = 0 

    iLength = int(input("Enter the size of Array : "))
    
    for i in range(iLength):
        Arr.append(int(input())) 
    
    fRet = calculateAverage(Arr)

    print("Average is : ",fRet) 

if __name__=="__main__":
    main()