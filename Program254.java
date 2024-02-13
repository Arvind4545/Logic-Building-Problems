
// Accept 2 Numbers from user and Display Common Factors of those two Numbers 

import java.util.* ; 

class Numbers 
{
    public void DisplayCommonFactors(int iValue1, int iValue2 )
    {
        int iMin = 0 , iCnt = 0 ; 

        if(iValue2 > iValue1 )
        {
            iMin = iValue1 ; 
        }
        else 
        {
            iMin = iValue2 ; 
        }

        for(iCnt = 1 ; iCnt <=  iMin / 2 ; iCnt++ )
        {
            if((iValue1 % iCnt == 0 )&&( iValue2 % iCnt == 0 ))
            {
                System.out.println("Common Factors are : "+iCnt) ; 
            }
        }
    }
}

class Program254 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ; 

        System.out.println("Please Enter Number: ") ;
        int iNo = sobj.nextInt() ;

        System.out.println("Enter Second Number : ") ; 
        int iNo2 = sobj.nextInt() ; 

        Numbers nobj = new Numbers() ;

        nobj.DisplayCommonFactors(iNo , iNo2 ) ; 
    }
}