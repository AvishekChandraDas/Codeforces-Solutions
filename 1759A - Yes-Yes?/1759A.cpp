//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
	cin >> t ; 

	string ss = "" ;

	for(int i = 0; i < 50; ++i) ss += "Yes" ;

	while(t--)
    {
		string s ;
		cin >> s ;

		int res = ss.find(s) ;
		if( res != -1 ) cout << "YES" << endl ;
		else cout << "NO" << endl ;
	}	

	return 0;
}