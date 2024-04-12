//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while( t-- )
    {
        
        char c ;
        cin >> c ;
        string s ;
        s = "codeforces" ;
        bool w = 0 ; 

        for( int i = 0 ; i < 10 ; i++ )
        {
            if( c == s[i] ) w = 1 ;
        }

        if( w == 1 ) cout << "YES" << endl ;
        else cout << "NO" << endl ;

    }
     

    return 0 ;
}