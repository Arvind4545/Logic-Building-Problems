
// Problems on N Numbers : Accept and Display 
//Accept N Numbers from user and store it into the Array and Check whether the Array is Palindrome or not 

import java.util.* ; 

class ArrayX 
{
    protected int Arr[] ; 

    public ArrayX(int iSize )
    {
        Arr = new int[iSize] ; 
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in) ; 
    
        System.out.println("Please Enter "+Arr.length+" Elements"); 

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++ )
        {
            System.out.println("Enter the Element no : "+(iCnt + 1 )) ; 
            Arr[iCnt] = sobj.nextInt() ; 
        }
    }

    protected void Display()
    {
        System.out.println("Elements of Array are : ") ; 

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++ )
        {
            System.out.print(Arr[iCnt]+"\t") ; 
        }
        System.out.println() ; 
    }
}

class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize )
    {
        super(iSize) ; 
    }

    public boolean CheckPalindrome()
    {
        int iStart = 0 ; 
        int iEnd = Arr.length -1 ;
        boolean bFlag = true ; 
        
        while(iStart < iEnd)
        {
            if(Arr[iStart] != Arr[iEnd])
            {
                bFlag = false ; 
                break ; 
            }
            iStart++ ; 
            iEnd-- ; 
        }
        return bFlag ; 
    }
}

class Program266
{
    public static void main(String arg[]) // Byte code verifier la call jail .. . before the execution of the Code 
    {
        Scanner sobj  = new Scanner(System.in) ; 

        System.out.println("Enter the Size of Array that you want to create ") ; 
        int iSize = sobj.nextInt() ; 

        MarvellousX obj = new MarvellousX(iSize) ; 

        obj.Accept() ; 
        obj.Display() ; 

        boolean bRet = obj.CheckPalindrome() ; 

        if(bRet == true )
        {
            System.out.println("Array is Palindrome") ; 
        }

        else 
        {
            System.out.println("Array isn't Palindrome") ; 
        }

    }
}