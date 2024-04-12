//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while( t-- )
    {
        int n , s , r ;
        cin >> n >> s >> r ;

        int a_max = s - r ;

        cout << a_max << " " ;

        for( int i = n - 1 ; i > 0 ; i-- )
        {
            for( int j = a_max ; j > 0 ; j-- )
            {
                if( r - j >= i - 1 )
                {
                    cout << j << " " ;
                    r = r - j ;
                    break ;
                }
            }
        }

        cout << endl ;
        
    }

    return 0 ;
}