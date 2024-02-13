#Accept a Number from user and display it in Reverse Order till 1 
# Input : 5 
# Output : 5 4 3 2 1 

def displayReverse(iValue):
    for i in range(iValue,0,-1):
        print(i,end=" ")

def main():
    iNo = 0  
    
    iNo = int(input("Enter a Number : ")) 

    displayReverse(iNo)

if __name__=="__main__":
    main()