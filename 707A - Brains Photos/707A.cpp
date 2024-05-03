//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int a , b ;
    cin >> a >> b ;
    char c ;
    bool k = 0 ;
    for( int i = 0 ; i < a * b ; i++ )
    {
        cin >> c ;
        if(c == 'C' || c == 'M' || c == 'Y')
        {
            k = 1 ;
        }
    }
    if( k == 1 ) cout << "#Color" << endl ;
    else cout << "#Black&White" << endl ;

    return 0 ;
}