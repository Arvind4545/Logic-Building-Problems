
// Problems on Pattern Printing 

/* 
    Input : 4529

    9 2 5 4 

    
*/

import java.util.* ; 

class Pattern 
{
    public void Display(int iNo)
    {
        int iDigit = 0 ; 
        
        while(iNo != 0 )
        {
            iDigit = iNo % 10 ; 
            System.out.print(iDigit + "\t") ; 
            iNo = iNo / 10 ;
        }
    }
}

class Program299
{
    public static void main(String arg[])
    {
        Pattern pobj = new Pattern() ; 

        Scanner sobj = new Scanner(System.in) ; 

        int iNo1 = 0 ; 

        System.out.println("Enter One Number ") ; 
        iNo1 = sobj.nextInt() ; 

        pobj.Display(iNo1) ; 
    }
}