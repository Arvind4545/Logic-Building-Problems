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

        int i = 0 ; 

        while( i < Arr.length) 
        {
            if(Arr[i] >= 'a' && (Arr[i] <= 'z'))
            {
                Count++ ; 
            }
            i++ ; 
        }

        System.out.println("Small Characters are : "+Count) ; 

    }
}

// Count Number of Small Case letters in the String using while loop 