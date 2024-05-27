//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;
void solve(int n , string a , string b )
{
    for(int i = 0 ; i < n ; i++ )
    {
        if(a[i]=='B'||a[i]=='G')
        {
            if(b[i]!='B'&&b[i]!='G')
            {
                cout << "NO" << endl;
                return ;
            }
        }
        else if(b[i]!='R')
        {
            cout << "NO" << endl;
            return ;
        }
        
    }
    cout << "YES" << endl ;
    return ;
}

int main()
{
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        string a , b ;
        cin >> n >> a >> b ;

        solve(n,a,b);

    }
    
}