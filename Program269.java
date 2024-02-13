
// Problems on String 
// Accepting String from user and traverse the String 

import java.util.* ; 

class Program269
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ;

        System.out.println("Please Enter Your Full Name ") ; 
        String  str = sobj.nextLine() ; // No need of Special scanf 

        for(int i = 0 ; i < str.length() ; i++ )
        {
            System.out.println(str.charAt(i)) ;
        }

    }
}