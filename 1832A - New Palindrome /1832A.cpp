//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve()
{
    string s ;
    cin >> s ;

    long long int l = s.length() ;
        
    for( int i = 0 ; i < ( l/2 ) - 1 ; i++ )
    {
        if( s[i+1] != s[i] )
        {
            cout << "YES" << endl ;
            return ;
        }   
    }

    cout << "NO" << endl ;

}

int main()
{

    int t ;
    cin >> t ;

    while( t-- )
    {
        solve() ;   
    }

    return 0 ;
    
}
