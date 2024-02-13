# Input : 4 
# Output : A B C D 

def display(iNo):
    name = "A" 

    for i in range(1,iNo+1):
        print(name,end = " ") 
        name  = chr(ord(name) + 1) 

def main():
    iNo = int(input("Enter a Number : ")) 

    display(iNo) 


if __name__ == "__main__":
    main()

# Ways to Increment character 
# using ord() and chr() method 
# ord() method returns the ASCII value 
# chr() method is used for type casting 
