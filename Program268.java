
// Problems on String 
// Accepting String from user and Find out the length 

import java.util.* ; 

class Program268
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ;

        System.out.println("Please Enter Your Full Name ") ; 
        String  str = sobj.nextLine() ; // No need of Special scanf 

        System.out.println("Number of Characters are :  "+str.length()) ; // Here , length is method 
    }
}