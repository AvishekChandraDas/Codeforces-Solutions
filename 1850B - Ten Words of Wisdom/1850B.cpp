//AvisCodeX

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while( t-- )
    {
        int n ;
        cin >> n;
        int max = 0, sn ;
        int a, b ;
        for ( int i = 1 ; i <= n ; i++ )
        {
            cin >> a >> b ;
            if( a <= 10 && b > max )
            {
                max = b ;
                sn = i ;
            }
        }

        cout << sn << endl ;

    }

    return 0 ;
}