/*1.Define a C++ class fraction 
class fraction
{
        long numerator ;
        long denominator ;
    public :
        fraction (long n=0 , long d=0) ;
}
Define an operator + to add two fraction object ;*/

#include<iostream>

using namespace std ;

class fraction
{
    private :
        long numerator ;
        long denominator ;

        int hcf (int x, int y)
        {
            int i, temp ;
            for (i=2 ; i<= (x<y?x:y) ; i++)
            {
                if (x%i==0 && y%i==0)
                    temp = i ;
            }
            return temp ;
        }
    public :
        fraction (long n=0 , long d=0)
        {
            numerator = n ;
            denominator = d ;
        }
        fraction operator+(fraction f)
        {
            fraction temp ;
            temp.denominator = denominator * f.denominator ;
            temp.numerator = (numerator*f.denominator) + (denominator*f.numerator) ;

            int x = hcf(temp.numerator ,temp.denominator) ; 

            temp.numerator /= x ;
            temp.denominator /= x ;

            return temp ;
        }

        void show_data ()
        {
            cout<<"Num="<<numerator<<"  Deno="<<denominator<<endl ;
        }
        
};

int main ()
{
    fraction f1(1,4) , f2(3,8) , f3 ;
    f1.show_data() ;
    f2.show_data() ;
    f3.show_data() ;

    cout<<endl ;

    f3 = f1+f2 ;
    f3.show_data() ;

    return 0 ;
}
