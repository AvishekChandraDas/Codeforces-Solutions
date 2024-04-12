//AvisCodeX

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;

    while( t-- )
    {
        int b, c, h ;
        cin >> b >> c >> h;

        if( b <= c + h )
        {
            cout << b + b -1 << endl ;
        }
        else 
        {
            cout << c + h + c + h +1 << endl ; 
        }
        

    }


    return 0 ;
}