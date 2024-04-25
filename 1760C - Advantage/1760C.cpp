//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int  main()
{
    int t ;
    cin >> t ;

    while(t--)
    {
        long int n ;
        cin >> n ;
        long long int a[n] , max = 0 , max2 = 0 , b[n] ;
        for( int i = 0 ; i < n ; i++ )
        {
            cin >> a[i] ;
            b[i] = a[i] ;
        }
        sort( b , b + n );
        max = b[ n - 1 ] ;
        max2 = b[ n - 2 ];
        for( int i = 0 ; i < n ; i++ )
        {
            long res = a[i] - max ;
            if( res != 0 ) cout << res <<" ";
            else cout << max - max2 <<" ";
        }
        cout << endl ;


    }
    
    return 0;
}