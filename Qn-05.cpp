/*5. Consider the following class Array
class Array
{
    int *p , size ;
    public :
        //methods ;
};
Define a constructor to allocate an array of given size (size is given through parameter).
Define subscript operator to access element at given index.
Define destuctor to dealloactes the memory of array.*/

#include<iostream>
using namespace std ;
class Array
{
    private :
        int *p , size ;
    public :
        Array (int s)
        {
            size = s ;
            p = (int*) malloc (size*sizeof(int)) ;
        }
        ~Array ()
        {
            free(p) ;
        }
        int& operator[] (int &index) // input
        {
            return p[index] ;
        }
        int operator[] (int index)const // output
        {
            return p[index] ;
        }


};
int main ()
{
    Array obj(5) ;
    
    //obj.setData() ;
    //obj.showData() ;

    cout<<"Enter 5 values :"<<endl ;
    for (int i=0 ;i<5 ; i++)
        cin>>obj[i] ;

    for (int i=0 ;i<5 ; i++)
        cout<<obj[i]<<" " ;

    return 0 ;

}
