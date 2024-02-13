
// Problems on Pattern Printing 

/* 
    * * * * 
    * * * * 
*/

import java.util.* ; 

class Pattern 
{
    public void Display(int iRow , int iCol)
    {
        int iCnt , j = 0 ; 
        for(int i = 1 ; i <= iRow ; i++ )
        {
            for(j = 1 ; j <= iCol ; j++ )
            {
                System.out.print("*\t") ; 
            }
            System.out.println("") ; 
        }
    }
}

class Program288
{
    public static void main(String arg[])
    {
        Pattern pobj = new Pattern() ; 

        Scanner sobj = new Scanner(System.in) ; 

        System.out.println("Enter Number of Rows :  ") ; 
        int i = sobj.nextInt() ; 

        System.out.println("Enter Number of Columns : ") ; 
        int j = sobj.nextInt() ; 

        pobj.Display(i , j ) ; 
    }
}