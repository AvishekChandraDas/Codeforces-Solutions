//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while(t--)
    {
        long long int n , sum = 0 , i , b = 1 ;
        cin >> n ;

        sum = ( n * ( n + 1 ) ) / 2 ;

        for(int i = 1 ; b <= n ; i++ )
        {
            sum -= ( 2 * b )  ;
            b = pow(2,i) ;
        }

        cout << sum << endl ;

    }

    return 0 ;
}