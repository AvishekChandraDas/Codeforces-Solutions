//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve( int n , string s )
{
    for( int i = 0 ; i < n ; i++)
    {
        for( int j = i+1 ; j < n ; j++ )
        {
            if( s[i] == s[j] )
            {
                if( ( j - i ) % 2 != 0) 
                {
                    cout<< "NO" << endl ;
                    return ;
                }
            }
        }
    }
    cout << "YES" << endl;
    return ;
}

int main()
{
    int t ;
    cin >> t ;

    while( t-- )
    {
        int n ;
        string s ;
        cin >> n >> s ;

        solve( n , s ) ;


    }

    return 0 ;

}