//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{ 
    int t ;
	cin >> t ;

	while(t--)
    {
		int n;
		cin >> n;
		int a[n] ;
		for( int i = 0 ; i < n ; i++ )
        {
            cin >> a[i] ;
        } 
		long long int  now = a[0];
		sort(a,a+n);
		for(int i = 1 ; i < n ; ++i )
        {
			if(a[i] > now)
            {
				now += (a[i] - now) / 2 + (a[i] - now) % 2 ;
			}
		}
		cout << now << endl ; 
	}

	return 0 ;
}