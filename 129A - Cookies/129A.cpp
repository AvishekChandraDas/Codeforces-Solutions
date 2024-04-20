//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n , a , o = 0 , e = 0 ;
    cin >> n ;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> a ;
        if( a % 2 == 0 ) e++ ;
        else o++ ;
    }
    if( o % 2 == 0 ) cout << e << endl;
    else if( o == 1 ) cout << 1 << endl;
    else cout << o << endl;


    return 0 ;
}