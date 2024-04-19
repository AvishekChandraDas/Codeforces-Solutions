//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve()
{
    long long a , b , xb , yb , xc , yc , x1 , y1 , x2 , y2 , sum = 1 ;
    cin >> a >> b >> xb >> yb >> xc >> yc ;

    x1 = min( xb , xc ) ;
    x2 = max( xb , xc ) ;
    y1 = min( yb , yc ) ;
    y2 = max( yb , yc ) ;

    if( x1 > a ) sum += x1 - a ;
    if( x2 < a ) sum += a - x2 ;
    if( y1 > b ) sum += y1 - b ;
    if( y2 < b ) sum += b - y2 ; 

    cout << sum << endl ;
    
    return ;
}

int main()
{
    long long int t ;
    cin >> t ; 
    while(t--)
    {
        solve() ;
    }

    return 0 ;
}