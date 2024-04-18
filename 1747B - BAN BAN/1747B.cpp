//AviCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve()
{
    long long n;
    cin >> n;
    cout << n / 2 + n % 2 << endl ;

    long long int i = 1, j = 3 * n;

    while (i < j)
    {
        cout << i << " " << j << endl ;
        i += 3 ;
        j -= 3 ;
    }
    cout << endl ;
}

int main()
{
    long long int  t = 1;
    cin >> t ;
    while (t--) 
    {
        solve();
    }
    return 0 ;
}

