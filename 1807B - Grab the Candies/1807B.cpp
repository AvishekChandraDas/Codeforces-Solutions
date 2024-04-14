//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while( t-- )
    {
        int n , a ;
        cin >> n ;
        int so = 0 , se = 0 ;
        
        while( n-- )
        {
            cin >> a ;
            if( a % 2 == 0 ) se += a ;
            else so += a ;
        }

        if( se > so ) cout << "YES" << endl ;
        else cout << "NO" << endl ;
    }

    return 0 ;
}