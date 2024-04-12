//AvisCodeX

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while( t-- )
    {
        int line = 8 ;
        string a ;
        a.clear() ;

        while( line-- )
        {
            string s ;
            cin >> s ;
            for( int i = 0 ; i < 8 ; i++ )
            {
                if( s[i] != '.' )
                {
                    a += s[i] ;
                }
            }
        }
        cout << a << endl ;
    }

}