/*4.In qn 3 , define pre & post decrement to decrease distance by 1cm.
        3.Define a C++ class Distance
            class Distance
            {
                    int km,m,cm ;
                public :
                    //methods ;
            }
        overload the operator + to add two distance object ;*/

#include<iostream>

using namespace std ;

class Distance
{
    private :
        int km,m,cm ;

    public :
        Distance(int km=0,int m=0, int cm=0):km(km),m(m),cm(cm) 
        { 
            //empty
        }
        void normalized ()
        {
            m = m + cm / 100 ;
            cm = cm % 100 ;

            km += m/1000 ;
            m %= 1000 ;
        }
        Distance operator -- () // Pre decrement
        {
            Distance temp ;
            temp.km = km ;
            temp.m = m ;
            temp.cm = --cm ; // cm=cm-1
            return temp ;
        }
        Distance operator -- (int) // Post decrement
        {
            Distance temp ;
            temp.km = km ;
            temp.m = m ;
            temp.cm = cm-- ; // cm=cm-1
            return temp ;
        }

        void showData()
        {
            normalized() ;
            cout<<km<<" "<<m<<" "<<cm<<endl ;
        }
    
};

int main ()
{
    Distance d1(2,250,50), d2(5,10,700) ;
    d1.showData() ;
    d2.showData() ;
    
    cout<<endl ;

    d1 = --d1 ;
    d1.showData() ;
    d1=d1-- ;
    d1.showData() ;
    

    return 0 ;
}
