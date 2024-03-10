/*3.Define a C++ class Distance
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

        void normalized ()
        {
            m = m + cm / 100 ;
            cm = cm % 100 ;

            km += m/1000 ;
            m %= 1000 ;
        }
    public :
        Distance(int km=0,int m=0, int cm=0):km(km),m(m),cm(cm)
        { }
        Distance operator + (Distance d)
        {
            Distance temp ;
            temp.km = km + d.km ;
            temp.m = m + d.m ;
            temp.cm = cm + d.cm ;

            temp.normalized() ;
            return temp ;
        }
        void showData()
        {
            cout<<km<<" "<<m<<" "<<cm<<endl ;
        }
    
};

int main ()
{
    Distance d1, d2(5,2250,650) , d3;
    d1.showData() ;
    d2.showData() ;

    cout<<endl ;

    d3=d1+d2 ;
    d3.showData() ;

    return 0 ;
}
