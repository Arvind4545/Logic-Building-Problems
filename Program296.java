
// Problems on Pattern Printing 

/* 
    Input : Hello 

    H e l l O 
    H e l l O 
    H e l l O 
    H e l l O 
    
*/

import java.util.* ; 

class Pattern 
{
    public void Display(String str)
    {
        char Arr[] = str.toCharArray() ; 
        int i = 0 ; 
        int j = 0 ; 
        
        for(i = 0 ; i < Arr.length ; i++ )
        {
            for(j = 0 ; j < Arr.length ; j++ )
            {
                System.out.print(Arr[j]+"\t"); 
            }
            System.out.println() ; 
        }

    }
}

class Program296
{
    public static void main(String arg[])
    {
        Pattern pobj = new Pattern() ; 

        Scanner sobj = new Scanner(System.in) ; 

        String Name = null ; 

        System.out.println("Enter string") ; 
        Name = sobj.nextLine() ; 

        pobj.Display(Name) ; 
    }
}