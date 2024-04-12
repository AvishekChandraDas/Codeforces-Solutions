//AvisCodeX

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n ;
    cin >> n ;

    string s ;
    cin >> s ;
    string x = "FBFFBFFBFBFFBFFBFB" ;

    if (x.find(s) != string::npos) cout << "YES" << endl ;
        
    else cout << "NO" << endl ;
        
}

int main()
{
    long long  T = 1;
    cin >> T ;

    while ( T-- ) 
    {
        solve() ;
    }

    return 0 ;

}