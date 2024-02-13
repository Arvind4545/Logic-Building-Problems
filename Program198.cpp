
//Problems on N Numbers 

#include<iostream>

using namespace std ; 

class ArrayX
{
    public : 
        int *Arr ; 
        int iSize ; 

        ArrayX(int i ) //Resource is memory outside the object 
        {
            cout<<"Allocating the Memory for Resources...."<<"\n" ; 
            iSize = i ; 
            Arr = new int[iSize] ; // Arr = (int * )malloc(Sizeof(int)*iSize) ; 
        }

        ~ArrayX()
        {
            cout<<"Deallocating the Memory of Resources.."<<"\n" ; 
            delete []Arr ; 
        }

        void Accept() //Getter Method 
        {
            cout<<"Enter the Elements of Array : \n" ; 

            for(int iCnt = 0 ; iCnt < iSize ; iCnt++ )
            {
                cin>>Arr[iCnt];   //scanf("%d".&Arr[iCnt]) ; 
            }
        }

        void Display()  //Setter Method 
        {
            cout<<"Elements of Array are  : \n" ; 

            for(int iCnt = 0 ; iCnt < iSize ; iCnt++ )
            {
                cout<<Arr[iCnt]<<"\t" ;             
            }
        }
};

int main()
{
    int iLength = 0 ; 

    cout<<"enter the Size of Array: "<<"\n" ; 
    cin>>iLength ; 

    ArrayX obj(iLength) ;  //Static and Softcoded ;

    obj.Accept() ; 
    obj.Display() ; 
    
    //yachya khali 500 lines cha code aahe 

    //ya code madhe obj chi lifetime inside the function aahe ..... tyamula return 0 la destructor la call jaato 
    return 0 ; 
}

//In this Application , Storage class object of Array is Auto and hence the lifetime of the obj is throughout the Function.
//Hence when the Function gets terminated or ends , Memory for obj gets deallocated which contains resource .....due to which destructor gets called
//which deallocates the resource .