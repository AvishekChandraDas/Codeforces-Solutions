//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while( t-- )
    {
        long long int n , d , r = 0 , sum = 0 ;
        cin >> n ;

        int a[n];
        fill(a, a + n, 0);

        for(int i = 0 ; i < n ; i++)
        {
            cin >> d ;
            if( d > 0 )
            {
                a[r] = d ;
                r++ ;
            }
            else
            {
                
                sort( a , a + n ) ;
                sum += a[n-1] ;
                a[n-1] = 0 ;
                r = 0 ;
            }

        }
        cout << sum << endl;
    }
}