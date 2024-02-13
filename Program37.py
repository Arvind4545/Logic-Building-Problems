# Input : 4 
# Output : 
# 4 
# 3 
# 2 
# 1 

def displayPattern(iValue) : 
    for i in range(  1 , iValue + 1 , 1 ):
        print(i,"\t*\t",end = " " ) 

def main():
    iNo = 0  

    iNo = int(input("Enter a Number : ")) 

    displayPattern(iNo)

if __name__=="__main__":
    main()