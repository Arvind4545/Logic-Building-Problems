
// Accept a Number from user and check whether the Number is Armstrong Number or not using only one behaviour 

import java.util.* ;

class Digits
{
    public boolean CheckArmstrong(int iNo )
    {
        int iDigitCount = 0 ; 
        int iTemp = iNo ; 
        int iDigit = 0 ; 
        int iCnt = 0 , iPower = 1 ; 
        int iSum = 0 ; 

        while( iTemp != 0 ) //Logic to Calculate Number of Digits 
        {
            iDigitCount++ ; 
            iTemp = iTemp / 10 ; 
        }

        iTemp = iNo ; 

        while( iTemp != 0 )
        {
            iDigit = iTemp % 10 ; 

            for(iCnt = 1 ; iCnt <= iDigitCount ; iCnt++ ) // Lodic to Calculate the Power 
            {
                iPower = iPower * iDigit ; 
            }
            iSum = iSum + iPower ; 
            iPower = 1 ;  //***************

            iTemp = iTemp / 10 ; 
        }

        if(iSum == iNo )
        {
            return true ;

        }
        else 
        {
            return false ; 
        }
    }
}

class Program258
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