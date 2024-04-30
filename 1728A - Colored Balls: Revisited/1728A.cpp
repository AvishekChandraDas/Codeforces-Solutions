//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while( t-- )
    {
        int n , a ;
        cin >> n ;
        int max = -1 , idx = -1 ;
        for( int i = 0 ; i < n ; i++ )
        {
            cin >> a ;
            if(a > max )
            {
                idx = i + 1 ;
                max = a ;
            }
        }
        cout << idx << endl ;
    }
    return 0 ;
}