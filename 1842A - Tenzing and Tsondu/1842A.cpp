//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long int t ;
    cin >> t ;
    
    while( t-- )
    {
        long long int a, b, total_a = 0, total_b = 0 ;
        cin >> a >> b ;
        while( a-- )
        {
            long long int num ;
            cin >> num ;
            total_a += num ;
        }
        while( b-- )
        {
            long long int num ;
            cin >> num ;
            total_b += num ;
        }

        if( total_a > total_b ) cout << "Tsondu" << endl ;
        else if ( total_b > total_a ) cout << "Tenzing" << endl ;
        else cout << "Draw" << endl ;

    }

    return 0;
}