
// Problems on String 
// Accepting String from user and Display the String 

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
}

class Program270
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ;

        System.out.println("Please Enter String") ; 
        String  str = sobj.nextLine() ; // No need of Special scanf 

        MarvellousX obj = new MarvellousX() ;
        obj.Display(str) ; 

    }
}