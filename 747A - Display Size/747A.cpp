//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long int n , a , b , x , i ;
    cin >> n ;

    x = pow( n , 0.5 ) ;
    
    for( i = x ; i >= 1 ; i-- )
    {
        if( n % i == 0 )
        {
            a = i ;
            b = n / i ;
            break ;
        }
    }
    cout << a << " " << b << endl ;

}