//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve( string s , int n )
{
    int Q = 0 , A = 0;

    for( int i = n - 1 ; i >= 0 ; i-- )
    {
        if( s[i] == 'A' ) A++ ;
        else Q++ ;

        if( Q > A )
        {
            cout << "No" << endl ;
            return ;
        }
    }
    cout << "Yes" << endl ;
    return ;

}

int main()
{
    int t ;
    cin >> t ;

    while( t-- )
    {
        int n ;
        string s ;
        cin >> n >> s ;

        solve( s , n ) ;
        
    }

    return 0 ;
}