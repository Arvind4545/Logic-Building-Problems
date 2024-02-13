#Python Program that accepts a Number from user and display factors 
# 10 
# Output : 2 5 

def displayFactors(iValue):
    for i in range(2,iValue):
        if(iValue % i == 0 ):
            print(i,end=" ")

def main():
    iNo = int(input("Enter a number : "))

    displayFactors(iNo)

if __name__=="__main__":
    main()