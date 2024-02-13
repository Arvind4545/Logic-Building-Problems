# Input : 4 
# Output : * * * * 

def display(iValue):
    for i in range(1,iValue+1):
        print("*",end = " ") 

def main():
    iNo = int(input("Enter Number : "))

    display(iNo)

if __name__=="__main__":
    main()