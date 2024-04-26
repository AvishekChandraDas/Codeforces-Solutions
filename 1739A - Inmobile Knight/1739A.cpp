//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while(t--)
    {
        int a , b ;
        cin >> a >> b ;

        if( a == 1 || b == 1 )
        {
            cout << a << " " << b << endl;
        }
        else if( a <= 3 && b <= 3 )
        {
            cout << (a/2)+1 << " " << (b/2)+1 << endl;
        }
        else
        {
            cout << a << " " << b << endl;
        }
    }
    return 0 ; 
}