//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long int t ;
    cin >> t ;

    while( t-- )
    {
        int  n ; 
        cin >> n ;

        if( n > 10 )
        {
            string s ;
            s = to_string(n) ;
            int l = s.length() ;
            int d = s[0] - 48 ;
            int m = ( l - 1 ) * 10 ;
            cout << d + m - l + 1 << endl ;
        }
        else cout << n << endl ;

    }

    return 0 ;
}