//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while( t-- )
    {
        string s ;
        cin >> s ;
        
        int a = s[0] - 48 ;
        int b = s[2] - 48 ;

        cout << a + b << endl ;

    }
    return 0 ;
}