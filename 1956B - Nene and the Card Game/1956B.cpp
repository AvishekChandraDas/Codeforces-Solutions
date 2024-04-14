//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long int t ;
    cin >> t;

    while( t-- )
    {
        long long int n ;
        cin >> n ;
        long long int a[n] ;

        for(long long int i = 0 ; i < n ; i++ )
        {
            cin >> a[i] ;
        }

        sort( a , a+n ) ;
        long long int sum = 0 ;
        
        for(long long  int i = 1 ; i < n ; i++ )
        {
            if( a[i-1] == a[i] )
            {
                sum++ ;
                i++ ;
            }
        }

        cout << sum << endl ;

    }


    return 0 ;
}
