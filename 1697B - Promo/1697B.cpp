//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve(long long int a[] , int n )
{
    long long int x , y ;
    cin >> x >> y ;
    cout << a[ n + y - x ] - a[ n - x ] << endl ; 
}

int main()
{
    long long int n , i , q ;
    cin >> n >> q ;
    long long int a[n+1] ; a[0] = 0 ;
    for( i = 0 ; i < n ; i++ )
    {
        cin >> a[i+1];
    }
    sort(a, a + n + 1 );

    for( i = 1 ; i <= n ; i++ )
    {
        a[i] += a[ i - 1 ] ;
    }

    while(q--)
    {
        solve(a,n) ;
    }

    return 0;
}