//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long int t ;
    cin >> t ;

    while( t-- )
    {
        long long int a , b , c , d ;
        
        cin >> a >> b ; 
        long long int arr[b] ;
        cin >> c ;
        a-- ;
        while( a-- )
        {
            cin >> d ;
        }
        for( int i = 0 ; i < b ; i++ )
        {
            cin >> d ;
            if( d < c ) cout << d << " " ;
            else cout << c - 1 << " " ;
        }
        cout << endl ;
    }
    
    return 0 ;
}
