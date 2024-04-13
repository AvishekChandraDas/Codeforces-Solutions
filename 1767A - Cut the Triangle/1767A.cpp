//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
	cin >> t ;
	while( t-- )
    {
		int x[4] = {} , y[4] = {} ;
		for( int i = 1 ; i < 4 ; ++i ) cin >> x[i] >> y[i] ;
		sort(x + 1 , x + 4) ;
		sort(y + 1 , y + 4) ;
		if( x[1] == x[2] || x[2] == x[3] )
        {
			if( y[1] == y[2] || y[2] == y[3]) cout << "NO" << endl ;
			else cout << "YES" << endl ;
		}
        else cout << "YES" << endl ;

	}	

	return 0 ;

}
