//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while( t-- )
    {
        int a , b , c ;
        cin>> a >> b >> c ;

        if( a % b != 0 )
        {
            int g = ( a / b ) + 1 ;
            if( c >= a - g ) cout << "NO" << endl ;
            else cout << "YES" << endl;
        }
        else
        {
            int g = ( a / b ) ;
            if( c >= a - g ) cout << "NO" << endl ;
            else cout << "YES" << endl ;
        }

    }

    return 0 ;
}