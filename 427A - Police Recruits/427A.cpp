//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n , p = 0 , c = 0 , u = 0 ;
    cin >> n ;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> c ;
        if( c >= 1 )
        {
            if( p <= 0 ) p = 0;
            p += c ;
        }
        else
        {
            p-- ;
            if( p < 0 ) u++ ;
        }
    }

    cout << u << endl ;

    return 0 ;
}