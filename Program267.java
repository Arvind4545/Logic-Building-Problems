
// Problems on String 
// Accepting String from user and Display it on the Console 

import java.util.* ; 

class Program267
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ;

        System.out.println("Please Enter Your Full Name ") ; 
        String  str = sobj.nextLine() ; // No need of Special scanf 

        System.out.println("Welcome "+str) ; 
    }

}