
// Problems on N Numbers : Accept and Display 

import java.util.* ; 

class ArrayX 
{
    public int Arr[] ; 

    public ArrayX(int iSize )
    {
        Arr = new int[iSize] ; 
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in) ; 
    
        System.out.println("Please Enter "+Arr.length+" Elements"); 

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++ )
        {
            System.out.println("Enter the Element no : "+(iCnt + 1 )) ; 
            Arr[iCnt] = sobj.nextInt() ; 
        }
    }

    public void Display()
    {
        System.out.println("Elements of Array are : ") ; 

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++ )
        {
            System.out.print(Arr[iCnt]+"\t") ; 
        }
    }
}

class Program260
{
    public static void main(String arg[])
    {
        Scanner sobj  = new Scanner(System.in) ; 

        System.out.println("Enter the Size of Array that you want to create ") ; 
        int iSize = sobj.nextInt() ; 

        ArrayX  obj = new ArrayX(iSize) ; 

        obj.Accept() ; 

        obj.Display() ; 

    }
}