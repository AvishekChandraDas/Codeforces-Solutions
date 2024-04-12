//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while( t-- )
    {
        long long int n, i ;
        cin >> n ;

        long long int arr[n] ;

        bool o = 0, e = 0 ;
        
        for( i = 0  ; i < n ; i++ )
        {
            cin >> arr[i] ;
            if( arr[i] % 2 == 0 ) o = 1 ;
            else e = 1 ;
        }
        if( o == 0 || e == 0 ) cout << "YES" << endl;
        else
        {
            sort( arr , arr + n );
            long long int min_odd = arr[n-1] , min_even = arr[n-1] ;

            for( int i = 0 ; i < n ; i++ )
            {
                if( arr[i] % 2 == 0 )
                {
                    if( arr[i] < min_even ) min_even = arr[i] ;
                }
                else 
                {
                    if( arr[i] < min_odd ) min_odd = arr[i] ;
                }
                
            }

            if( min_even > min_odd ) cout << "YES" << endl ;
            else cout << "NO" << endl ; 

        }
        



    }

    return 0 ;
}