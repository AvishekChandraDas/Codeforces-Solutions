//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
	cin >> t ;

	while(t--)
    {
		int n ;
		cin >> n ;
		int a[n] ;
		for(auto &i: a) cin >> i ;
		string s ;
		cin >> s ;
		string res = s ; 
		for( int i = 0 ; i < n ; ++i )
        {
			int d = a[i] ;
			for( int j = 0 ; j < n ; ++j )
            {
				if(a[j] == d) res[j] = s[i] ;
			}
		}

		if(res == s) cout << "YES" << endl ;
		else cout << "NO" << endl ;

	}
	return 0 ;
}