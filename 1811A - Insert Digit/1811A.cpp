//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve( int n, string s , int k )
{
    for( int i = 0 ; i < n ; i++ )
    {
        
        int d = s[i] ;

        d -= 48 ;
        
        if( k >  d )
        {
            for(int j = 0 ; j < i  ; j++ )
            {
                cout << s[j] ;
            }
            cout << k ;
            for(int j = i  ; j < n ; j++ )
            {
                cout << s[j] ;
            }
            cout << endl ;

            return ;
        }
    }
    
    for( int i = 0 ; i < n ; i++ ) cout << s[i] ;
    cout << k << endl ;

    return ;

}
 
int main()
{
    int t ;
    cin >> t ;
    while( t-- )
    {
    long long int n , k , d ;
    string s ;
    cin >> n >> k >> s ;

    solve( n, s, k );

    }
    return 0 ;
    
}