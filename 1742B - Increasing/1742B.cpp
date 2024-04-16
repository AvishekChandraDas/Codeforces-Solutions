//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve( long long  int a[] , int n )
{
    for( int i = 1 ; i < n ; i++ )
    {
        if( a[ i - 1 ] == a[i])
        {
            cout << "NO" << endl ;
            return ;
        }
    }
    cout << "YES" << endl ;
    return ;
}

int main()
{
    int t ;
    cin >>  t ;

    while( t-- )
    {
        int n ;
        cin >> n ;
        long long int a[n] ;

        for( int i = 0 ; i < n ; i++ )
        {
            cin >> a[i] ;
        }

        sort( a , a + n ) ;

        solve( a , n ) ;

    }

    return 0 ;
}