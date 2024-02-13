import java.util.*;

class Student
{
    public String Sname;
    public int Marks;
    public int Rollno;

    public static int Generator;

    static
    {
        Generator = 0;
    }

    public Student(String str, int no)
    {
        this.Sname = str;
        this.Marks = no;
        Generator++;
        this.Rollno = Generator;
    }

    public void Display()
    {
        System.out.println("Roll No : "+Rollno+" Name : "+Sname+" Marks : "+Marks);
    } 
}

class DBMS 
{
    public LinkedList <Student> lobj ; 

    public DBMS()
    {
        lobj = new LinkedList() ; 
    }

    public void StartDBMS()
    {
        System.out.println("Marvellous Customized DBMS started Succesfully........") ; 
    }

    // All SQL Queries should be implemented here 

    // insert into Student Values(  ,  ) ; 
    public void Insert(String str , int no)
    {
        Student sobj = new Student(str , no ) ; 
        lobj.add(sobj) ;   
    }

    // Select * from student ; 
    public void DisplayAll()
    {
        for(Student sref : lobj )
        {
            sref.Display() ; 
        }
    }

    // Select * from Student where Rollno = 3 : Query 
    public void DisplaySpecific(int Value ) 
    {
        for(Student sref : lobj)
        {
            if(sref.Rollno == Value) 
            {
                sref.Display() ; 
                break ; 
            }
        }
    }

    // Select * from Student where Name = 'Rutuja' ; 
    public void DisplaySpecific(String str ) 
    {
        for(Student sref : lobj)
        {
            if(str.equals(sref.Sname)) 
            {
                sref.Display() ; 
                break ; 
            }
        }
    }

    // delete from student where Rollno = 3 ; 

    public void Delete(int no)
    {
        int index = 0; 

        for(Student sref : lobj )
        {
            if(sref.Rollno == no )
            {
                lobj.remove(index) ; 
                break ; 
            }
            index++ ; 
        }
    }

    // delete from student where name = "kartik" ; 
    public void Delete(String str)
    {
        int index = 0 ; 
        
        for(Student sref : lobj )
        {
            if( str.equals(sref.Sname))
            {
                lobj.remove(index) ; 
            }
        }
    }

    public void Sum()
    {
        int iSum = 0 ; 

        for(Student sref : lobj )
        {
            iSum = sref.Marks + iSum ; 
        }

        System.out.println("Summation of Marks : "+iSum ) ; 
    }

    public void Max()
    {
        int iMax = 0 ; 

        for(Student sref : lobj )
        {
            if(sref.Marks > iMax )
            {
                iMax = sref.Marks ; 
            }
        }

        System.out.println("Maximum Marks are :  "+iMax ) ; 
    }

    public void Min()
    {
        Student s = lobj.get(0) ; 

        int iMin = s.Marks ; 

        for(Student sref : lobj )
        {
            if(sref.Marks < iMin )
            {
                iMin = sref.Marks ; 
            }
        }

        System.out.println("Minimum Marks are :  "+iMin ) ; 
    }

    public void Avg()
    {
        int iSum = 0 ; 

        for(Student sref : lobj )
        {
            iSum = sref.Marks + iSum ; 
        }

        System.out.println("Average of Marks : "+iSum / lobj.size() ) ; 
    }

}

class Program500
{
    public static void main(String Arg[])
    {
        DBMS dobj = new DBMS() ; 

        dobj.StartDBMS() ; 

        dobj.Insert("Kartik",90) ; 
        dobj.Insert("Rutuja",96) ; 
        dobj.Insert("Ankit",80) ; 
        dobj.Insert("Pooja",67) ; 
        dobj.Insert("Ram",91) ; 

        dobj.DisplayAll() ; 

        dobj.DisplaySpecific(3) ; 
        dobj.DisplaySpecific("Rutuja") ; 

        dobj.Delete(3) ; 
        dobj.Delete("Ram") ; 

        System.out.println("Final Data : ") ; 

        dobj.DisplayAll() ; 

        dobj.Sum() ; 
        dobj.Max() ; 
        dobj.Min() ; 
        dobj.Avg() ; 
    }
}