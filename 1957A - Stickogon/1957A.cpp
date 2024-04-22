//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while( t-- )
    {
        int n , res = 0 ;
        cin >> n ;
        int a[101] ;
        for( int i = 0 ; i <= 100 ; i++)
        {
            a[i] = 0  ;
        }
        for( int i = 0 ; i < n ; i++ )
        {
            int x ;
            cin >> x ;
            a[x]++;
        }
        for( int i = 1 ; i <= 100 ; i++ )
        {
            if( a[i] > 2 )
            {
                res += a[i] / 3 ;
            }
        }
        cout << res << endl;
    }
    return 0 ;
}