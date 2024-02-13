
import java.util.* ; 

class Factors
{
    public void EvenFactors(int iValue1) 
    {
        int iCnt = 0; 

        for(iCnt = 1 ; iCnt < iValue1 ; iCnt++  )
        {
            if(iValue1 % iCnt == 0 )
            {
                if(iCnt % 2 == 0 ) 
                {
                    System.out.print(iCnt+"\t") ; 
                }
            }
        }
    }
}
class Program250 
{
    public static void main(String Arg[])
    {
        int iNo = 0 ; 

        Scanner sobj = new Scanner(System.in) ; 

        System.out.println("Enter Any Number : ") ; 
        iNo = sobj.nextInt() ; 

        Factors fobj = new Factors() ;

        fobj.EvenFactors(iNo) ; 
    }
}