//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve(string s)
{
    int l = s.length() ;
    for( int i = 1 ; i < l ; i++  )
    {
        if(s[i] != s[0])
        {
            swap(s[0],s[i]);
            cout << "YES" << endl << s << endl;
            return ;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        string s ;
        cin >> s ;
        solve(s) ;
    }
}
