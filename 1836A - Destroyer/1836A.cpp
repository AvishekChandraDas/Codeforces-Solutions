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
        cin >> n;
        int a[n] ;

        for( int i = 0 ; i < n ; i++ )
        {
            cin >> a[i];
        }

        sort( a , a + n );

        int b[ a[n-1] + 1 ];

        for(int i = 0 ; i < a[n-1] + 1 ; i++ )
        {
            b[i] = 0 ;
        }

        for(int i = 0 ; i < n ; i++ )
        {
            b[a[i]]++ ;
        }

        bool p = 0;
        
        for( int i = 1 ; i < a[n-1] + 1 ; i++ )
        {
            if( b[i-1] < b[i] )
            {
                p = 1 ;
            }
        }

        if(p == 0 ) cout << "YES" << endl ;
        else cout << "NO" << endl ;




    }

    return 0 ;
}