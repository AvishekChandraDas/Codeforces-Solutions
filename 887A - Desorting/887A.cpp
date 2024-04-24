//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;
void solve()
{
    long int n , min = INT_MAX ;
    cin >> n ;
    int a[n] ;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
    }
    for( int i = 1 ; i < n ; i++ )
    {
        if( a[i-1] > a[i] )
        {
            cout << 0 << endl ;
            return ;
        }
        int  e = (abs( a[i-1] - a[i] ) / 2 ) + 1 ;
        if(e < min && e > 0 ) min = e ;
    }

    cout << min << endl ;
    
}

int main()
{
    int t ; 
    cin >>  t ;
    while( t-- )
    {
        solve() ;
    }

    return 0 ;
}