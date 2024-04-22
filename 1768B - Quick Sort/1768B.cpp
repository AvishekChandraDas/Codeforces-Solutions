//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve()
{
    long int n , k , sum = 0 , l = 1 ;
    cin >> n  >> k ;
    long int a[n] ;

    for( int i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
        if(a[i] == l ) l++ ;
        else sum++ ;
    }
    cout << ( sum + k - 1 ) / k << endl ;
    return ;
    
}

int main()
{
    long int t ;
    cin >> t ;
    while( t-- )
    {
        solve() ;
    }

    return 0 ;
}