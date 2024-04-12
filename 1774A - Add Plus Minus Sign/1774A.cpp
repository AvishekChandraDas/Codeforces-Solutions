//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while( t-- )
    {
        int n ; 
        string s ;
        cin >> n >> s ;
        int t = 2 ;

        if( s[0] == '1' ) t++ ;

        for( int i = 1 ; i < n ; i++ )
        {
            if( s[i] == '1' && t % 2 == 0 )
            {
                t++ ;
                cout << "+" ;
            }
            else if( s[i] == '1' && t % 2 != 0 )
            {
                t++;
                cout << "-" ;
            }
            else cout << "-" ;
        }
        
        cout << endl ;

    }


    return 0 ;
}