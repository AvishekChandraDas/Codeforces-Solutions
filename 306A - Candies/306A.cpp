//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n , m , d = 0 , c = 0;
    cin >> n >> m ;

    d = n % m ;
    c = n / m ;

    for( int i = 0 ; i < m - d ; i++ )
    {
        cout << c << " ";
    }
    for( int i = 0 ; i < d ; i++ )
    {
        cout << c + 1 << " ";
    }
    cout << endl;

    return 0 ; 

}