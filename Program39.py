# Rows = 4 
# Columns = 4 

#     * * * * 
#     * * * * 
#     * * * * 
#     * * * * 

def displayPattern(iNo1 , iNo2 ) : 

    for i in range(1,iNo1+1):
        for j in range(1,iNo2+1):
            print("*",end = " ")
        print()


def main():
    iRows = 0 
    iCols = 0 

    iRows = int(input("Enter Number of Rows : "))
    iCols = int(input("Enter Number of Columns : "))

    displayPattern(iRows , iCols)

if __name__=="__main__": # Starter 
    main()
