# Input : 4 
# Output : 1 2 3 4 

def displayPattern(iValue) : 
    for i in range(1,iValue+1):
        print(i,end = " ") 

def main():
    iNo = 0  

    iNo = int(input("Enter a Number : ")) 

    displayPattern(iNo)

if __name__=="__main__":
    main()