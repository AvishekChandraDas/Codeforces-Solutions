//AvisCodeX

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while( t-- )
    {
        int n ;
        string s,ss ;
        ss.clear();

        cin >> n >> s ;
        for( int i = 1 ; i < n ; i++ )
        {
            if( s[i] == s[0] )
            {
                ss += s[0] ;
                s[0] = s[i+1] ;
                i++ ;
            }
        }
        cout << ss << endl ;

    }

    return 0;
}