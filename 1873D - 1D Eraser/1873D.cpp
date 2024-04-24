//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while(t--)
    {
        int n , k , sum = 0 ;
        string s ;
        cin >> n >> k >> s ;

        for( int i  = 0 ; i < n ; i )
        {
            if( s[i]== 'B' )
            {
                sum++ ;
                i += k ;
            }
            else
            {
                i++ ;
            }
        }
        

        cout << sum <<  endl ;
    }

    return 0;
}
