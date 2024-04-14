//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long int t ;
    cin >> t ;

    while( t-- )
    {
        int n ;
        cin >> n ;

        long long sum = 0;
        for( int j = 1 ; j <= n ; j++ )
        { 
            sum += ( (j*2) - 1 ) * j ;
        }
        if( n == 1 )
        {
            cout << "1" << " " << "1" << endl << "1 1 1" << endl ;
        }
        else if( n == 2 )
        {
            cout << "7" << " " << "3" << endl << "1 1 1 2" << endl << "1 2 1 2" << endl << "2 1 1 2" << endl ;
        }
        else 
        {
            cout << sum << " " << 2 * n << endl;
            for( int i = n ; i >= 1 ; i-- )
            {
                for(int j = 1 ; j < 3 ; j++)
                {
                    cout << j << " " << i ; 
                    for( int k = 1 ; k <=n ; k++ ) cout << " " << k ;
                    cout << endl ;
                }
            }
        }


    }


    return 0 ;
}