
import java.util.* ; 

class Numbers 
{
    public int FactorsMultiplication(int iValue1)
    {
        int iMult = 1 ; 

        for(int iCnt = 1 ; iCnt < iValue1 ; iCnt++ )
        {
            if( (iValue1 % iCnt) == 0 )
            {
                iMult = iMult * iCnt ; 
            }
        }
        return iMult ; 
    }
}

class Program256
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ; 

        System.out.println("Please Enter Number: ") ;
        int iNo = sobj.nextInt() ; 

        Numbers nobj = new Numbers() ;

        int iRet = nobj.FactorsMultiplication(iNo) ; 

        System.out.println("Multiplication of Factors is : "+iRet) ; 
    }
}