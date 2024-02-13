
// Problems on String 
// Accepting String from user and Count Number of Digits 

import java.util.* ; 

class MarvellousX
{
    public void Display(String s )
    {
        for(int i = 0 ; i < s.length() ; i++ )
        {
            System.out.println(s.charAt(i)) ;
        }
    }
    public int CountDigit(String s )
    {
        int iCount = 0 ; 
        int iCnt = 0 ; 

        for(iCnt = 0 ; iCnt < s.length() ; iCnt++ )
        {
            if(s.charAt(iCnt) >= '0' && s.charAt(iCnt) <= '9' )
            {
                iCount++ ; 
            }
        }
        return iCount  ; 
    }
}

class Program273
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ;

        System.out.println("Please Enter String") ; 
        String  str = sobj.nextLine() ; 

        MarvellousX obj = new MarvellousX() ;
        obj.Display(str) ; 

        int iRet = obj.CountDigit(str) ; 

        System.out.println("Number of Digits in String are : "+iRet) ; 

    }
}