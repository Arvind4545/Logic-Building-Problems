# Accept a Number from user and display it's odd Factors 

def displayOddFactors(iValue):

    for i in range(1,iValue):
        if( iValue % i == 0 and i % 2 != 0 ):
            print(i,end=" ")
            
def main():
    iNo = int(input("Enter a Number : ")) 

    displayOddFactors(iNo)

if __name__=="__main__":
    main()