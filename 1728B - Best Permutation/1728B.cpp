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
        if( n % 2 == 0 )
        {
            for( int i = 1 ; i <= n - 2 ; i++)
            {
                cout << i + 1 << ' ' << i << ' ' ;
                i++ ;
            }
            cout << n - 1 << ' ' << n << endl ;
        }
        else
        {
            if( n == 5) cout << "1 2 3 4 5" << endl ;
            else
            {
                cout << "1 2 3 " ;
                for( int i = 4 ; i <= n - 2 ; i++ )
                {
                    cout << i + 1 << ' ' << i << ' ';
                    i++ ;
                }
                cout << n - 1 << ' ' << n << endl ;
            }
        }
    }

    return 0 ;
}