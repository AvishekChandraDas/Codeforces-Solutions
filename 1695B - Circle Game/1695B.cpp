//AvisCodeX

#include <bits/stdc++.h>
using namespace std ;

int main()
{

    long int t ; 
    cin >> t ;

    while(t--)
    {
        long int  n ; 
        cin >> n ;
        long int a[n] ; 
        for(long p = 0 ; p < n ; p++)
        {
            cin >> a[p] ;
        }

        if(n % 2)
        {
            cout << "Mike" << endl ; 
            continue ;
        }
        long idx(0);
        for(long p = 0 ; p < n ; p++)
        {
            if(a[p] < a[idx])
            {
                idx = p ;
            }
        }
        
        if( idx % 2 == 0 )
        {
            cout << "Joe" << endl ;
        }
        else
        {
            cout << "Mike" << endl ;
        }
    }

}