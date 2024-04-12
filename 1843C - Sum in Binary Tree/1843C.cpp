//AvisCodeX

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t ;
    cin >> t ;

    while( t-- )
    {
        long long int a ;
        cin >> a ;
        long long int sum = a ;

        while( a != 0 )
        {
            sum += a / 2 ;
            a = a / 2 ;
        }

        cout << sum << endl ;

    }

    return 0;
}