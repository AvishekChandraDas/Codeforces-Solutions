//AvisCodeX

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while( t-- )
    {
        int a , b ;
        cin >> a >> b ;

        if( a<0 ) a *= -1 ;
        if( b<0 ) b *= -1 ;

        if( a == b ) cout << a + b << endl ;

        else if ( a > b ) cout << a + a - 1 << endl ;
        
        else cout << b + b - 1 << endl;

    }

    return 0 ;
}