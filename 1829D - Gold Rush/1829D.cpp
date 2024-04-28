//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

bool check( int a , int b )
{
    if( a == b ) return true ;
    else if( a % 3 != 0 || a < b ) return false ;
    else return ( check( a / 3 , b ) || check( ( 2 * a ) / 3 , b )) ;
}

void solve()
{
    long int a , b  , c ;
    cin >> a >> b ;
    bool w = check( a , b ) ;
    if(w) cout << "YES" << endl ;
    else cout << "NO" << endl ;
}

int main()
{
    int t ;
    cin >> t ; 

    while( t-- )
    {
        solve() ;
    }

}