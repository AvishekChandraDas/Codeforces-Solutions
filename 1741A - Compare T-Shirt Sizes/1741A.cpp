//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long int t ;
    cin >> t ;

    while( t-- )
    {
        string s1 , s2 ;
        cin >> s1 >> s2 ;

        int l1 = s1.length() ;
        int l2 = s2.length() ;

        if( s1[ l1 - 1 ] == 'S' ) l1 *= -1 ;
        else if( s1[ l1 - 1 ] == 'M' ) l1 *= 2 ;
        else l1 *= 4 ;

        if( s2[ l2 - 1 ] == 'S' ) l2 *= -1 ;
        else if( s2[ l2 - 1 ] == 'M' ) l2 *= 2 ;
        else l2 *= 4 ;

        if( l1 == l2 ) cout << "=" << endl ;
        else if( l1 > l2 ) cout << ">" << endl ;
        else cout << "<" << endl ;

    } 


    return 0 ;
}