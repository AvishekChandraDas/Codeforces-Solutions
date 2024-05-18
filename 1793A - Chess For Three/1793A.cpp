//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int a , b ,c ;
        cin >> a >> b >> c ;
        if( (a+b+c) % 2 == 0)
        {
            int d = a + b ;
            if(d>=c)
            {
                cout<<(a+b+c)/2<<endl;
            }
            else
            {
                cout<<a+b<<endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0 ;
}
