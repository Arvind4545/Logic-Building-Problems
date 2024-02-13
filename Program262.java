
// Problems on N Numbers : Accept and Display 
//Accept N Numbers from user and return the Addition of N Numbers 

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

    public int Addition()
    {
        int iSum = 0 ; 
        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++ )
        {
            iSum = iSum + Arr[iCnt] ; 
        }
        return iSum ; 
    }
}

class Program262
{
    public static void main(String arg[]) // Byte code verifier la call jail .. . before the execution of the Code 
    {
        Scanner sobj  = new Scanner(System.in) ; 

        System.out.println("Enter the Size of Array that you want to create ") ; 
        int iSize = sobj.nextInt() ; 

        MarvellousX obj = new MarvellousX(iSize) ; 

        obj.Accept() ; 
        obj.Display() ; 

        int iRet = obj.Addition() ; 

        System.out.println("Addiiton of Elements of Array are : "+iRet) ; 

    }
}