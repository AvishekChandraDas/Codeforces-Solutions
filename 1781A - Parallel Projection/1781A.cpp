//AvisCodeX

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int w, d, h ;
    cin >> w >> d >> h ;

    int a, b, f, g ;
    cin >> a >> b >> f >> g ;

    int res = b + abs(a - f) + g ;
    res = min(res, a + abs(b - g) + f) ;
    res = min(res, (d - b) + abs(a - f) + (d - g)) ;
    res = min(res, (w - a) + abs(b - g) + (w - f)) ; 
    cout << res + h << endl ;
}

int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    int t ;
    cin >> t ;

    while (t--)
    {
        solve() ;
    }
    return 0;
}