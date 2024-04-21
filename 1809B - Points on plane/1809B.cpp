//AvisCodeX

#include<bits/stdc++.h>
using namespace std ; 


int main(){

    long int t ;
    cin >> t ;
    while(t--)
    {
        long long int n ; 
        cin >> n ;
        long long int  l(0), r(1e9), res(0) ;
        while(l <= r)
        {
            long long int m = ( l + r ) / 2 ;
            if(m * m < n)
            {
                res = m ; l = m + 1 ; 
            }
            else
            {
                r = m - 1 ;
            }
        }

        cout << res << endl ;
    }

}