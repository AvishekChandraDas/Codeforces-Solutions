//AvisCodeX

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while( t-- )
    {
        int n , a, b, sum = 0 ;
        cin >> n ;
        while( n-- )
        {
            cin >> a >> b ;
            if( a > b ) sum++ ;
        }
        cout << sum << endl ;

    }

    return 0 ;
}