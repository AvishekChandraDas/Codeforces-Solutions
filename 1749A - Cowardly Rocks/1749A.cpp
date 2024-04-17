//AvisCodeX

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        int m ;
        cin >> m ;
        int rooks[m][2] ;
        for(int i = 0 ; i < m ; i++)
        {
            cin >> rooks[i][0] >> rooks[i][1] ;
        }
        if(m < n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0 ;
}
