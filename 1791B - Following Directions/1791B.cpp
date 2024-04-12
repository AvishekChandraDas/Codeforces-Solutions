//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve()
{
    int n ; 
    string s ;
    cin >> n >> s ;

    int x = 0 , y = 0 ;
    for( int i = 0 ; i < n ; i++ )
    {
        if( s[i] == 'U' ) y++ ;
        else if( s[i] == 'D' ) y-- ;
        else if( s[i] == 'R' ) x++ ; 
        else if( s[i] == 'L' )  x-- ;
        if( x == 1 && y == 1 )
        {
            cout << "YES" << endl ;
            return ;
        }
    }
    cout << "NO" << endl ;
    
}

int main()
{
    int t ;
    cin >> t ;

    while( t-- )
    {
        solve() ;
    }

    return 0 ;
}