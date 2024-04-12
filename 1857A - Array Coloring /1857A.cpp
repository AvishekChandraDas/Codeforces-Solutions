//AvisCodeX
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while( t-- )
    {
        int n;
        cin >> n;
        int num;
        int odd = 0;
        for( int i = 0 ; i < n ;  i++ )
        {
            cin >> num ;
            if( num % 2 != 0 )
            {
                odd++ ;
            }
        } 

        if( odd % 2 == 0 ) cout << "YES" << endl;
        else cout << "NO" << endl;

    }


    return 0;
}