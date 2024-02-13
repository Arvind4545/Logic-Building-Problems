import java.util.* ; 

interface Marvellous 
{
    public void BubbleSort() ; 
    public void SelectionSort() ; 
    public void InsertionSort() ; 
}

class Sorting implements Marvellous 
{   
    private int Arr[] ; 

    public Sorting(int Size )
    {
        Arr = new int[Size] ; // Resource allocation 
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in) ; 
        
        System.out.println("Enter the Elements : ") ; 

        for(int i = 0 ; i < Arr.length  ; i++ )
        {
            Arr[i] = sobj.nextInt() ;  
        }
    }

    public void Display() 
    {
        System.out.println("Elements of Array are : ") ; 

        for(int i =0 ; i < Arr.length ; i++ )
        {
            System.out.println(Arr[i]) ; 
        }
    }

    
}

class Program438
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in) ; 

        System.out.println("Enter the Size of Array : ") ; 
        int Size = sobj.nextInt() ; 

        Sorting obj = new Sorting(Size) ; 

        obj.Accept() ; 
        obj.Display() ; 
    }
}