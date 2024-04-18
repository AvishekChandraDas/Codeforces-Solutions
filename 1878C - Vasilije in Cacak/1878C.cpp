//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve()
{
    long long int n , k , x ;
    cin >> n >> k >> x ;
    long long int max = ( n * ( n + 1 ) - ( n - k ) * ( n - k + 1 ) ) / 2 ;
    long long int min = k * ( k + 1 ) / 2 ;
    if( x <= max && x >= min )
        cout << "YES" << endl ;
    else
        cout << "NO" << endl ;
}
 

int main()
{
    int t ;
    cin >> t ;
    while( t-- )
    {
        solve();   
    }

    return 0 ;
}