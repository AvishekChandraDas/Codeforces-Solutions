//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n , k , a = 97 ;
    cin >> n >> k ;
    for( int i = 0 ; i < n ; i++ )
    {
        if( i % k == 0 ) a = 97 ;
        char c = a ; a++ ;
        cout << c ;
    }
}