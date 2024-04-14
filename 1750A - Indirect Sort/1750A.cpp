//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
	cin >> t ;

	while( t-- )
    {
		int n ;
		cin >> n ;

		bool e = 0 ;
		int a ;

		for(int i = 0 ; i < n ; ++i )
        {
			cin >> a ;
			if(i == 0)
            {
				if(a == 1) e = 1 ;
			}
		}
		if(e) cout << "YES" << endl ;
		else cout << "NO" << endl ;
	}	
	return 0;
}