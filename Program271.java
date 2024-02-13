
// Problems on String 
// Accepting String from user and Display the String and  even count the number of smallcase letters in it 

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
    public int CountSmallCase(String s )
    {
        int iCount = 0 ; 
        int iCnt = 0 ; 

        for(iCnt = 0 ; iCnt < s.length() ; iCnt++ )
        {
            if(s.charAt(iCnt) >= 'a' && s.charAt(iCnt) <= 'z')
            {
                iCount++ ; 
            }
        }
        return iCount  ; 
    }
}

class Program271
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ;

        System.out.println("Please Enter String") ; 
        String  str = sobj.nextLine() ; 

        MarvellousX obj = new MarvellousX() ;
        obj.Display(str) ; 

        int iRet = obj.CountSmallCase(str) ; 

        System.out.println("Number of Smallcase Letters in String are : "+iRet) ; 

    }
}