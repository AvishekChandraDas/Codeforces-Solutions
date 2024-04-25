//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ; 
    cin >> t ;
    while( t-- )
    {
        int n ;
        cin >> n ;
        long long int a[n] , sum = 1 ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
            sum *= a[i] ;
        }
        cout << ( sum + n - 1 ) * 2022 <<endl;
    }

    return 0 ;
}