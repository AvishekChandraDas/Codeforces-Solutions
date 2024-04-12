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
        cin >> n ;
        if( n % 2 != 0 )
        {
            string s ;
            s.clear();

            while( n != 1 )
            {
                if( ( ( n + 1 ) / 2 ) % 2 != 0 ) 
                {
                    s = s + to_string(1);
                    n = ( n + 1 ) / 2 ;
                }
                else 
                {
                    s = s + to_string(2);
                    n = ( n - 1 ) / 2 ;
                }
            }

            int l = s.length() ;
            cout << l << endl ;

            while( l-- )
            {
                cout << s[l] << " " ;
            }

            cout << endl ;
        }
        
        else cout << "-1" << endl;
    }

    return 0 ;
}