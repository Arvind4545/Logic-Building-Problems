# Input : 4 
# Output : 
# 4 
# 3 
# 2 
# 1 

def displayPattern(iValue) : 
    for i in range(iValue , 0 , -1 ):
        print(i) 

def main():
    iNo = 0  

    iNo = int(input("Enter a Number : ")) 

    displayPattern(iNo)

if __name__=="__main__":
    main()