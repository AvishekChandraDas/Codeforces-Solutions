//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long int t ;
    cin >> t ;

    while( t-- )
    {
        long long int n , k ;
        cin >> n >> k ;
        if ( ( n - 2 ) % k == 0 ) cout << "YES" << endl ;
        else if( n % 2 == 0 ) cout << "YES" << endl ;
        else if ( ( n - k ) % 2 == 0 ) cout << "YES" << endl ;
        else cout << "NO" << endl ;

    }

    return 0 ;
}