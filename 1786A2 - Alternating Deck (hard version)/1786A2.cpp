//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ; 
    cin >> t ;
    
    while( t-- )
    {
        long long int n ; 
        cin >> n ;

        long long int aw = 0 , ab = 0 , bw = 0 , bb = 0 ;

        aw++ ;
        n-- ;

        long long int i = 2 ;

        while( n != 0 )
        {
            if( i <= n )
            {
                if( i % 2 == 0)
                {
                    bw += i / 2 ;
                    bb += i / 2 ;
                }
                else
                {
                    bw += i / 2 ;
                    bb += ( i / 2 ) + 1 ;
                }
                n -= i ;
                i++ ;
            }
            else 
            {
                if( n % 2 == 0)
                {
                    bw += n / 2 ;
                    bb += n / 2 ;
                }
                else
                {
                    bw += n / 2 ;
                    bb += ( n / 2 ) + 1 ;
                }

                n -= n ;
                i++ ;
            }
            if( i <= n )
            {
                if( i % 2 == 0)
                {
                    bw += i / 2 ;
                    bb += i / 2 ;
                }
                else
                {
                    bw += i / 2 ;
                    bb += ( i / 2 ) + 1 ;
                }
                n -= i ;
                i++ ;
            }
            else 
            {
                if( n % 2 == 0)
                {
                    bw += n / 2 ;
                    bb += n / 2 ;
                }
                else
                {
                    bw += n / 2 ;
                    bb += ( n / 2 ) + 1 ;
                }

                n -= n ;
                i++ ;
            }
            if( i <= n )
            {
                if( i % 2 == 0)
                {
                    aw += i / 2 ;
                    ab += i / 2 ;
                }
                else
                {
                    ab += i / 2 ;
                    aw += ( i / 2 ) + 1 ;
                }
                n -= i ;
                i++ ;
            }
            else 
            {
                if( n % 2 == 0)
                {
                    ab += n / 2 ;
                    aw += n / 2 ;
                }
                else
                {
                    ab += n / 2 ;
                    aw += ( n / 2 ) + 1 ;
                }

                n -= n ;
                i++ ;
            }
            if( i <= n )
            {
                if( i % 2 == 0)
                {
                    aw += i / 2 ;
                    ab += i / 2 ;
                }
                else
                {
                    ab += i / 2 ;
                    aw += ( i / 2 ) + 1 ;
                }
                n -= i ;
                i++ ;
            }
            else 
            {
                if( n % 2 == 0)
                {
                    ab += n / 2 ;
                    aw += n / 2 ;
                }
                else
                {
                    ab += n / 2 ;
                    aw += ( n / 2 ) + 1 ;
                }

                n -= n ;
                i++ ;
            }


        }
        cout << aw << " " << ab <<" " << bw << " " << bb << endl ;
    }

    return 0 ;
}