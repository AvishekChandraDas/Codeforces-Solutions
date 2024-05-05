//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n , u = 1 , t = 1; 
    cin >> n ; 
    for( int i = 1 ; i < n ; i++ )
    {
        t +=  u ;
        if( t > n ) t = t - n ;
         cout << t  << " " ;
        u++ ;
    }
}