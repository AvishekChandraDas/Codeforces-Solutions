//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve()
{
    int a , b ,j = 0, k = 0 , max = 0 ;
    string q , w  ;
    cin >> a >> b >> q >> w ;

    for( int i = 0 ; i < b ; i++ )
    {
        if(w[i] == q[j] )
        {
            k++ ;
            j++ ;
        }
    }
    cout << k << endl; 
    return ;
}

int main()
{
    int t ;
    cin >> t ;
    while( t-- )
    {
        solve() ;
    }
}