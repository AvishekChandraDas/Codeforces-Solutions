//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while ( t-- )
    {
        int n , T = 0 , i = 0 , m = 0 , u = 0 , r = 0 ; 
        string s ;
        cin >> n >> s ;
        if( n > 5 )
        {
            cout << "NO" << endl ;
        }
        else
        {
            for( int j = 0 ; j < n ; j++ )
            {
                if( s[j] == 'T' ) T++ ;
                else if( s[j] == 'i') i++ ;
                else if( s[j] == 'm') m++ ;
                else if( s[j] == 'u') u++ ;
                else if( s[j] == 'r') r++ ;
            }
            if(T == 1 && m == 1 && i == 1 && u == 1 && r == 1 )
            {
                cout << "YES" << endl ;
            }
            else 
            {
                cout << "NO" << endl ;
            }
        }
    }
    

}