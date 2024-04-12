//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve()
{
    int n ; 
    cin >> n ;

    
    if( n % 2 == 0 )
    {
        int i = 1 ;
        int j = ( n - 2 ) / 2 ;
        if( ( i + j  ) * 2 == n )
        {
            cout << i << " " << j+1 << endl ;
            return ;
        }
        else 
        {
            cout << "-1" << endl ;
            return ;
        }
    }
    else cout << "-1" << endl ;
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