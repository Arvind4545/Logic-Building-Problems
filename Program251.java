
//Java Application to Accept One Number from user and Display Even factors of that Number 

import java.util.* ; 

class Numbers 
{
    public void EvenFactorsDisplay(int iNo )
    {
        int iCnt = 0 ; 

        for(iCnt = 1 ; iCnt <=  (iNo / 2 )  ; iCnt++ )
        {
            if((iNo % iCnt ) == 0 )
            {
                if((iCnt % 2) == 0 )
                {
                    System.out.println("Even Factor is : "+iCnt ) ; 
                }
            }
        }
    }
}

class Program251
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ; 

        System.out.println("Please Enter Number: ") ;
        int iNo = sobj.nextInt() ; 

        Numbers nobj = new Numbers() ;

        nobj.EvenFactorsDisplay(iNo) ; 
    }
}