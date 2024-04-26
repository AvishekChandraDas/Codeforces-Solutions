//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;
void solve()
{
    int a[101] ;
    for( int i = 0 ; i < 101; i++ )
    {
        a[i] = 0 ;
    }
    int n , c , b , sum = 0;
    cin >> n >> c ;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> b ;
        a[b]++ ;
    }
    for( int i = 1 ; i <= 100 ; i++ )
    {
        if( a[i] > 0 )
        {
            if( a[i] >= c )
            {
                sum += c ;
            }
            else sum += a[i] ;
        }
    }

    cout << sum << endl;
    
}

int main()
{
    int t ;
    cin >> t ;

    while(t--)
    {
        solve() ;
    }

    return 0 ;
}
