
import java.util.* ; 

class Program264
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ; 
        
        System.out.println("Enter Size of Array ") ; 
        int iSize = sobj.nextInt() ;       

        int Arr[] = new int[iSize] ; 

        System.out.println("enter the Element of Array ") ; 

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++ )
        {
            Arr[iCnt] = sobj.nextInt() ; 
        }  
        
        int iSum = 0 ; 

        for(int i = 0 ; i< Arr.length ; i++ )
        {
            iSum = iSum + Arr[i] ;
        }

        System.out.println("Summation of N Elemnets is : "+iSum ); 
    }
}