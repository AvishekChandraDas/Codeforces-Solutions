//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long int t ;
    cin >> t ;
    while( t-- )
    {
        
        long long int n , a , sum = 0 ;
        cin >> n ;
        while( n-- )
        {
            cin >> a ;
            sum += a ;
        }

        if( sum < 0) cout << sum * -1 << endl ;
        else cout << sum << endl ;

    }

    return 0 ;
}