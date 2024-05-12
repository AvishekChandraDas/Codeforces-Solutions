//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve(int n )
{
    long int c = 0 ;
    while(n!=1&&n>0)
    {
        while(n % 6 == 0)
        {
            c++;
            n /= 6 ;
        }
        if( n != 1 )
        {
            n *= 2 ;
            c++ ;
        }
        if( n % 6 != 0 && n != 1)
        {
            cout << "-1" << endl ;
            return ;
        }
    }
    cout << c << endl;
}

int main()
{
    long int t ;
    cin >> t ;
    while( t-- )
    {
        long long int n ;
        cin >> n ;
        solve(n);
    }
}