# Accept a number and display its non Factors 
# Input : 6 
# Output : 4 and 5 

def displayNonFactors(iValue) :
    for i in range(1,iValue):
        if(iValue % i != 0 ):
            print(i,end=" ")

def main():
    iNo = 0  
    iNo = int(input("Enter a Number : "))

    displayNonFactors(iNo)

if __name__=="__main__":
    main()