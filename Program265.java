
// Problems on N Numbers : Accept and Display 
//Accept N Numbers from user and store it into the Array and reverse the Array 

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
        System.out.println("\n") ; 
    }
}

class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize )
    {
        super(iSize) ; 
    }

    public void Reverse()
    {
        int iStart = 0 ; 
        int iEnd = Arr.length -1 ; 
        int iTemp = 0 ; 

        while(iStart < iEnd )
        {
            iTemp = Arr[iStart] ; 
            Arr[iStart ] = Arr[iEnd] ; 
            Arr[iEnd] = iTemp ; 

            iStart++ ; 
            iEnd-- ; 
        }
    }
}

class Program265
{
    public static void main(String arg[]) // Byte code verifier la call jail .. . before the execution of the Code 
    {
        Scanner sobj  = new Scanner(System.in) ; 

        System.out.println("Enter the Size of Array that you want to create ") ; 
        int iSize = sobj.nextInt() ; 

        MarvellousX obj = new MarvellousX(iSize) ; 

        obj.Accept() ; 
        obj.Display() ; 

        obj.Reverse() ; 

        System.out.println("Array after Reversal is : ") ;

        obj.Display() ;  

    }
}