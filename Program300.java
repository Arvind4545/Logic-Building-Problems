
// Problems on Pattern Printing 

/* 
    Input : 4529

    9 2 5 4 

    
*/

import java.util.* ; 

class Pattern 
{
    public void Display(int iNo , int iRows )
    {
        int iDigit = 0 ; 
        int iTemp = iNo ; 

        for(int i = 1 ; i <= iRows ; i++ )
        {
            iNo = iTemp ; 
            
            while(iNo != 0 )
            {
                iDigit = iNo % 10 ; 
                System.out.print(iDigit + "\t") ; 
                iNo = iNo / 10 ;
            }
            System.out.println() ; 
        }
        
    }
}

class Program300
{
    public static void main(String arg[])
    {
        Pattern pobj = new Pattern() ; 

        Scanner sobj = new Scanner(System.in) ; 

        int iNo1 = 0 ; 

        System.out.println("Enter One Number ") ; 
        iNo1 = sobj.nextInt() ; 

        System.out.println("Enter Number of Rows ") ; 
        int iNo2 = sobj.nextInt() ; 

        pobj.Display(iNo1 , iNo2 ) ; 
    }
}