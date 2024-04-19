//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main(){
    
    long t ; 
    cin >> t ;

    while(t--)
    {

        long n;
        cin >> n ;
        long long res(0);
        long x(0), mx(0);

        for(long p = 0; p < n; p++)
        {
            cin >> x ; 
            res += x ;
        }
        for(long p = 0; p < n; p++)
        {
           cin >> x ;
           res += x ; 
           mx = (mx > x) ? mx : x ;
        }
        res -= mx;

        cout << res << endl ;
    }
    return 0 ;

}