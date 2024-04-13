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
        int a ;
        int odd[n] ;
        int even[n] ;
        int o = 0 , e = 0 ;

        for( int i = 1 ; i <= n ; i++ )
        {
            cin >> a ;
            if( a % 2 == 0 ) 
            {
                even[e] = i ;
                e++ ;
            }
            else
            {
                odd[o] = i ;
                o++ ;
            }
        }
        if(o > 0 && e > 1)
        {
            cout << "YES" << endl ;
            cout << odd[0] << " " << even[0] << " " << even[1] << endl ;
        }
        else if( o > 2 )
        {
            cout << "YES" << endl ;
            cout << odd[0] << " " << odd[1] << " " << odd[2] << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
        
    }

    return 0 ;
}