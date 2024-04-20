//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long int n ;
    int a = 0 , b = 0 , c = 0 , x = 0 ;
    cin >> n ;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> x ;

        if( x == 50 )
        {
            b++ ;
            if( a == 0 )
            {
                cout << "NO" << endl;
                return 0 ;
            }
            else a-- ;
        }
        else if( x == 100 )
        {
            if( ( a < 3 ) && ( a < 1 || b < 1 ) )
            {
                cout << "NO" << endl ;
                return 0 ;
            }
            else
            {
                if( b > 0 )
                {
                    b--;
                    a--;
                }
                else a -= 3 ;
            }
        }
        else a++;  
    }
    cout << "YES" << endl;
    return 0 ;

}