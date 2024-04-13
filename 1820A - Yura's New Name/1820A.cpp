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
        int cnt = 0 ;
        int len = s.length() ;
        if( len < 2 && s[0] == '^' ) cout << "1" <<endl ;
        else 
        {
            if( s[0] == '_' ) cnt++ ;
            for(int i = 1 ; i < len ; i++ )
            {
                if( s[i-1] == '_' && s[i] == '_' ) cnt++ ;
            }
            if( s[ len - 1 ] == '_' ) cnt++ ;
            cout << cnt << endl ;
        }
    }

    return 0 ;
}