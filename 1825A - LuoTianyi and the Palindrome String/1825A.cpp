//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while( t-- )
    {
        string s ;
        cin >> s ;

        bool c = 0 ;
        int l = s.length() ;
        
        for( int i = 1 ; i < l ; i++ )
        {
            if( s[ i - 1 ] != s[ i ] ) c = 1 ;
        }

        if( c == 1 ) cout << l - 1 << endl ;
        else cout << "-1" << endl ;

    }


    return 0 ; 
}