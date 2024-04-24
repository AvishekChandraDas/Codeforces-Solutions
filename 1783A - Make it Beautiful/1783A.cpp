//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

void solve()
{
    int n , sum = 0 ;
    cin >> n ;
    int a[n] ;
    bool k = 0 ;
    for (int i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
    }
    
    swap(a[0],a[1]);
    swap(a[n-1],a[0]);
    if( a[0] == a[1])
    {
        cout << "NO" << endl;
    } 
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] <<" ";
        }
        cout << endl ;
        
    }
}

int main()
{
    int t ;
    cin >> t ;

    while(t--)
    {
        solve() ;
    }
    return 0 ;
}