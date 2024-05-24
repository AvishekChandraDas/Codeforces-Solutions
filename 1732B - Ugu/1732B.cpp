//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while( t-- )
    {
        int n , sum = 0 ;
        string s ;
        cin >> n >> s ;
        bool k = 1 ;
        for( int i = 0 ; i  < n ; i++ )
        {
            if( s[i] == '1' && k == 1 )
            {
                k = 0 ;
                sum++ ;
            }
            else if( s[i] == '0' && k == 0 ) 
            {
                k = 1 ;
                sum++ ;
            }
        }
        sum-- ;
        if(sum > 0 ) cout << sum << endl ;
        else cout << 0 << endl ;

    }

    return 0;
}