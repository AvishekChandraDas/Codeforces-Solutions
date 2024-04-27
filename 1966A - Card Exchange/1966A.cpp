//AvisCodeX 

#include<bits/stdc++.h>
using namespace std ;
void solve()
{
        int n , k ;
        cin >> n >> k ;
        int a[n] ;
        for( int i = 0 ; i < n ; i++ )
        {
            cin >> a[i] ;
        }
        
        for( int i = 0 ; i < n ; i++ )
        {
            int c = 0 ;
            for( int j = 0 ; j < n ; j++ )
            {
                if( a[i] == a[j] ) c++ ;
                if( c >= k )
                {
                    cout << k - 1 << endl;
                    return ;
                }
            }
        }
        cout << n << endl;
        return ;
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