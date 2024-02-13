
// Accept a Number from user and check whether the Number is Armstrong Number or not 

import java.util.* ;

class Digits
{
    private int CountDigits(int iNo)
    {
        int iCnt = 0 ; 
        while(iNo != 0 )
        {
            iCnt++ ; 
            iNo = iNo / 10 ; 
        }
        return iCnt ; 
    }
    
    private int Power(int Base , int index )  // Base = 4 Index = 5 
    {
        int iAns = 1 ; 

        for(int iCnt = 1 ; iCnt <= index ; iCnt++ )
        {
            iAns = iAns * Base ; 
        }
        return iAns ; 
    }

    public boolean CheckArmstrong(int iNo )
    {
        int itemp = iNo ; 
        int iSum = 0  ; 
        int iDigit = 0 ; 
        int iRet = 0 ; 

        int iCount  = CountDigits(iNo ) ; 

        while(iNo != 0 )
        {
            iDigit = iNo % 10 ; 

            iRet = Power(iDigit , iCount) ; 
            iSum = iSum + iRet ; 

            iNo = iNo / 10 ; 
        }

        if(iSum == itemp )
        {
            return true ; 
        }
        else 
        {
            return false ;
        }
    }
}

class Program257
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in) ;

        System.out.println("Please Enter Number : ") ;
        int iNo = sobj.nextInt() ; 

        Digits dobj = new Digits() ; 

        boolean bRet = dobj.CheckArmstrong(iNo) ; 

        if(bRet == true )
        {
            System.out.println(iNo+" is a Armstrong Number") ; 
        }
        else 
        {
            System.out.println(iNo+ "is not a Armstrong Number") ; 
        }
    }
}