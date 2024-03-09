/*2. In qn 1 , define a operator < to compare two fraction objects.
1.Define a C++ class fraction 
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

        /*int hcf (int x, int y)
        {
            int i, temp ;
            for (i=2 ; i<= (x<y?x:y) ; i++)
            {
                if (x%i==0 && y%i==0)
                    temp = i ;
            }
            return temp ;
        }*/
    public :
        fraction (long n=0 , long d=0)
        {
            numerator = n ;
            denominator = d ;
        }
        /*fraction operator+(fraction f)
        {
            fraction temp ;
            temp.denominator = denominator * f.denominator ;
            temp.numerator = (numerator*f.denominator) + (denominator*f.numerator) ;

            int x = hcf(temp.numerator ,temp.denominator) ; 

            temp.numerator /= x ;
            temp.denominator /= x ;

            return temp ;
        }*/

        bool operator < (fraction f)
        {
            double x, y ;
            x = numerator / (denominator*1.0) ; //bcz doble = int/int
            y = f.numerator / (f.denominator*1.0) ;

            if (x<y)
                return true ;
            else
                return false ;
        }
        void show_data ()
        {
            cout<<"Num="<<numerator<<"  Deno="<<denominator<<endl ;
        }
        
};

int main ()
{
    fraction f1(1,4) , f2(1,5) ;
    f1.show_data() ;
    f2.show_data() ;

    cout<<endl ;

    if (f1<f2)
        cout<<"f1 is small :)"<<endl ;
    else
        cout<<"f2 is small :("<<endl ;

    return 0 ;
}
