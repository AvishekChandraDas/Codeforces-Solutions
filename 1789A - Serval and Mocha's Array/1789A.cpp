//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve()
{
    int n ;
    cin >> n ;
    int a[n] ;
    for( int i = 0 ; i < n ; ++i )  cin >> a[i] ;
    for( int i = 0 ; i < n ; ++i )
    {
        for( int j = i + 1 ; j < n ; ++j )
        {
            if( gcd( a[i] , a[j] ) <= 2 )
            {
                cout << "Yes" << endl ;
                return ;
            }
        }
    }
    cout << "No" << endl ;
    return ;
}

int main()
{
    int t ;
    cin >> t ;

    while ( t-- ) solve() ;
    
    return 0 ;
}