//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve()
{
    long long int a , b , c , d , sum = 0 ;
    cin >> a >> b >> c ;
    if( a == b && b == c )
    {
        cout << "YES" << endl ;
        return ;
    }
    else 
    {
        d = a < b ? a < c ? a : c : b < c ? b : c ;
        if( a % d == 0 && b % d == 0 && c % d == 0 )
        {
            sum = ( a + b + c ) / d ;
            if( sum < 7 )
            {
                cout << "YES" << endl;
                return ;
            }
            else
            {
                cout << "NO" << endl;
                return ;
            }
        }
        else 
        {
            cout << "NO" << endl;
            return ;
        }
    }
}

int main()
{
    int t ;
    cin >> t ;

    while(t--)
    {
       solve() ;
    }

    return 0 ;
}