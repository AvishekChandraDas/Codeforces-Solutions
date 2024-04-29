//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main(){

    long t ;
    cin >> t ;
    while( t-- )
    {
        long n ; 
        cin >> n ;
        string s ;
        cin >> s ;
        long idx(0), mod(0) ;
        bool ans(true);
        while(idx < n)
        {
            if(mod)
            {
                if( idx + 1 >= n || s[idx + 1] != s[idx] )
                {
                    ans = false ; 
                    break ;
                }
                idx += 2 ;
            }
            else
            {
                ++idx; 
            }

            mod = 1 - mod ;
        }

        cout << (ans ? "YES" : "NO") << endl ;
    }


}