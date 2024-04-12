//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve()
{
    int n ;
    string s ;
    cin >> n >> s ;
    int sum = n ;

    for( int i = 0 ; i <= ( n - 1 ) / 2 ; i++ )
    {
        if( s[i] == s[n-i-1] )
        {
            cout << sum << endl ;
            return ;
        }
        else sum -= 2 ;
    }

    cout << sum << endl ;
    return ;


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