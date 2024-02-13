
// Problems on String 
// Accepting String from user and Count the Number of Uppercase letters in String 

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
    public int CountUpperCase(String s )
    {
        int iCount = 0 ; 
        int iCnt = 0 ; 

        char Arr[] = s.toCharArray() ; 

        for(iCnt = 0 ; iCnt < s.length() ; iCnt++ )
        {
            if((Arr[iCnt] >= 'A')&& ( Arr[iCnt] <= 'Z'))
            {
                iCount++  ; 
            }
        }
        return iCount ; 
    }
}

class Program276
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ;

        System.out.println("Please Enter String") ; 
        String  str = sobj.nextLine() ; 

        MarvellousX obj = new MarvellousX() ;
        obj.Display(str) ; 

        int iRet = obj.CountUpperCase(str) ; 

        System.out.println("Number of UpperCase Letters in String are : "+iRet) ; 

    }
}