//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve()
{
    int n ;
    cin >> n ;
    int a[n];
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
    }
    int cc = 0 ;
    for(int i = 0, j = n - 1 ; i < j ; i++ , j--)
    {
        if( a[i] == 1 && a[j] == 0 ) cc++ ;
        else if( a[i] == 1 && a[j] == 1 ) i-- ;
        else if( a[i] == 0 && a[j] == 0 )  j++ ;
    }
    cout << cc << endl ;
}

int main()
{
    int t ;
    cin >> t ;
    while( t-- ) solve();

    return 0 ;
}