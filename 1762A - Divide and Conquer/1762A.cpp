//AviCodeX

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
		int a[n] ;
		int sum = 0 ;

		for(int i = 0 ; i < n ; ++i )
        {
			cin >> a[i] ;
			sum += a[i] ;
		}

		if(sum % 2 == 0) cout << "0" << endl ;
		else
        {
			int cnt , mn = 1e6 ;
			for(int i = 0; i < n; ++i )
            {
				cnt = 0 ;
				int now = a[i] , ss = sum - now ;
				while(now)
                {
					++cnt ;
					now /= 2 ;
					if( (ss + now) % 2 == 0 )
                    {
						ss += now ; 
						break ;
					}
				}
				if(ss % 2 == 0) mn = min(mn, cnt) ;
			}
			cout << mn << endl ;
		}
	}
	return 0;

}