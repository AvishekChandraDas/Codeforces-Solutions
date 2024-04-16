//AvisCodeX

#include <bits/stdc++.h>
using namespace std ;

void solve()
{
    int n ;
    cin >> n ;
    int a[n] ;
    int cc = 1;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
        if( a[i] != 0 ) cc = 0 ;        
    }

    if(cc)
    {
        cout << 0 << endl ;
        return ;
    }
    if( n % 2 )
    {
        cout << 4 << endl ;
        cout << 1 << " " << n - 1 << endl ;
        cout << 1 << " " << n - 1 << endl ;
        cout << n - 1 << " " << n << endl ;
        cout << n - 1 << " " << n << endl ;
    }
    else
    {
        cout << 2 << endl ;
        cout << 1 << " " << n << endl ;
        cout << 1 << " " << n << endl ;
    }
}

int main()
{
    int t ;
    cin >> t ;
    while ( t-- ) solve() ;
    return 0 ;
}