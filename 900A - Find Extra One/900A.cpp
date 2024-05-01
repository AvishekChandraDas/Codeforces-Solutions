//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int a[n] , b[n] ;
    int l = 0 ;
    int r = 0 ;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> a[i] >> b[i] ;
        if(a[i]<0)
        {
            l++ ;
        }
        else
        {
            r++ ;
        }
    }
    if( l == 1 || r == 1 || ( l == 0 && r > 0 ) || ( l > 0 && r == 0 )) 
    {
        cout << "YES" << endl ;
    }
    else
    {
        cout << "NO" << endl ;
    }

    return  0 ;
}