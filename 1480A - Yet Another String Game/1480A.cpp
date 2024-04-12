//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long  t , n ;
    cin >> t;

    while( t-- ) 
    {
        int test = 1 ;
        string s ;
        cin >> s ;
        n = s.length(); 

        for( int i = 0 ; i < n ; i++ )
        {
            if( test == 1 )
            {
                if( s[i] == 'a' ) s[i] = 'b' ;
                else if( s[i] != 'a' ) s[i] = 'a' ;
                test = 2 ;
            }
            else if( test == 2 )
            {
                if( s[i] == 'z' ) s[i] = 'y' ;
                else if( s[i] != 'z' ) s[i] = 'z' ;
                test = 1 ;
            }
        }

        cout << s << endl;
        
    }

    return 0;
}