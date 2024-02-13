
// Problems on Pattern Printing 

/* 
    Row = 4 
    Col = 4 
     
    1 2 3 4 
    5 6 7 8 
    9 1 2 3 

*/

import java.util.* ; 

class Pattern 
{
    public void Display(int iRow , int iCol)
    {
        int i  , j = 0 ; 
        int iCnt = 1 ; 

        for(i = 1 ; i <= iRow ; i++ )
        {
            for(j = 1 ; j <= iCol ; j++ )
            {
                System.out.print("%d\t",iCnt) ;
            }
            System.out.println("") ; 
        }
    }
}

class Program289
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