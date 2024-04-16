//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

long long int  solve(long long int x)
{
	long long int l = 0, r = sqrtl(x) + 100, mid ;
	long long int ans ;

	while(l <= r)
    {
		mid = r - (r - l) / 2 ;
		long long int sq = mid * mid ; 
		if(sq == x) return mid ;
		if(sq > x) r = mid - 1 ;
		else
        {
			l = mid + 1 ;
			ans = mid ;
		}
	}
	return ans ;
}
int main()
{
	int t ;
	cin >> t ;

	while(t--)
    {
		long long int n ;
		cin >> n ; 
		if(n % 2 == 0)
        {
			n /= 2 ;
			long long int ans = 2 * (n * (n + 1) / 2) ;
			cout << solve(ans) << endl ;
		}
        else
        {
			n /= 2 ;
			long long int ans = 2 * (n * (n + 1) / 2) + (n + 1) ;
			cout << solve(ans) << endl ;
		}
	}

	return 0 ;
}