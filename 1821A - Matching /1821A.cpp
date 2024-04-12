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
        int l = s.length() ;

        int sum = 1 ;

        for( int i = 0 ; i < l ; i++ )
        {
            if( s[i] == '?' && s[0] != '0' ) 
            {
                if( i == 0 ) sum *= 9 ;
                else sum *= 10 ;
            }
        }

        if( sum == 1 &&  s[0] == '0' ) cout << "0" << endl ;
        else cout << sum << endl ;

    }

    return 0 ;
}