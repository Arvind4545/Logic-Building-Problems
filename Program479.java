import java.util.* ; 

class Program479
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ; 

        System.out.println("Enter the String : ") ; 
        String str = sobj.nextLine() ; 

        char Arr[] = str.toCharArray() ; 
        int Count = 0 ; 

        for(char ch : Arr ) // for each loop 
        {
            if(( ch >= 'a') && ( ch <='z'))
            {
                Count++ ; 
            }
        }

        System.out.println("Small Characters are : "+Count) ; 

    }
}

// Count Number of Small Case letters in the String using for each loop 