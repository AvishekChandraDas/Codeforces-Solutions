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
        if(a<b)
        {
            cout << a << " " << b << endl;
        }
        else
        {
            cout << b << " " << a << endl;
        }
    }
}
