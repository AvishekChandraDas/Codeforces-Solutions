//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ; 
    cin >> t ;
    while( t-- )
    {
        int x , max = 0 , u = 0; 
        cin >> x ;
        for( int i = 1 ; i < x ; i++ )
        {
            int q = __gcd(x,i) + i ;
            if(q>max)
            {
                max = q ;
                u = i ;
            }
        }
        cout << u << endl ;
        
    }
}