//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while( t-- )
    {
        int n ; 
        cin >> n ;
        int a ;
        for( int i = 0 ; i < n ; i++ )
        {
            cin >> a ;
        }

        int num = 10 - n ;
        num *= num - 1 ;
        cout << num * 3 << endl;


    }

    return 0 ;
}
