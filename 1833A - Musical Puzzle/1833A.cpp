//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while( t-- )
    {
        int a , m = 1 ;
        string s ;

        cin >> a >> s ;

        string arr[a-1];

        for( int i = 0 ; i < a - 1 ; i++ )
        {
            arr[i] = s[i] ;
            arr[i] += s[i+1];
        }

        sort( arr , arr + (a-1) ) ;

        for(int i = 1 ; i < a - 1 ; i++)

        {
            if( arr[i-1] != arr[i] ) m++ ;
        }

        cout << m << endl ;

    }

    return 0 ;
}