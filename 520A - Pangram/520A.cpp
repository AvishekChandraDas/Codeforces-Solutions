//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve( string s , int n )
{
    int alp = 97 , aa = 0 ;
    for( int i = 0 ; i < n ; i++ )
    {
        int a = s[i] ;
        if( a == alp ) 
        {
            aa++ ;
            alp++ ;
        }
        else if( a > alp)
        {
            cout << "NO" << endl ;
            return ;
        }
    }

    if( aa == 26 ) cout << "YES" << endl ;
    else cout << "NO" << endl ;
    return ;
}

int main()
{
    int n ;
    string s ;
    cin >> n >> s ;

    transform(s.begin(), s.end(), s.begin(), ::tolower); 
    sort( s.begin(), s.end() ) ; 

    solve( s , n ) ;

    return 0 ;
}