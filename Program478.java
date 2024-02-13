import java.util.* ; 

class Program478
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ; 

        System.out.println("Enter the String : ") ; 
        String str = sobj.nextLine() ; 

        char Arr[] = str.toCharArray() ; 
        int Count = 0 ; 

        for(int i = 0 ; i < Arr.length ; i++ )
        {
            if((Arr[i] >= 'a') && (Arr[i] <='z'))
            {
                Count++ ; 
            }
        }

        System.out.println("Small Characters are : "+Count) ; 

    }
}
// Count Number of Small Case letters in the String 