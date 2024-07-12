//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ; 
    cin >> t ;

    while(t--)
    {
        int n , q ;
        cin >> n >> q ;
        int a[n] ;
        long long int  sum = 0 , l , r , k ;
        for( int i = 0 ; i < n ; i++ )
        {
            cin >> a[i] ;
            sum += a[i] ;
        }
        for( int i = 0 ; i < q ; i++ )
        {
            long long int su = 0 ;
            cin >> l >> r >> k ;
            for( int i = l - 1 ; i < r ; i++ ) su += a[i] ;
            long int d = (r-l) + 1 ;
            su = ( sum - su ) + (k*d) ;
            if(su % 2 == 1 ) 
            {
            cout << "YES" << endl;
            }
            else cout << "NO" << endl ;
        }
        
        }


    }
