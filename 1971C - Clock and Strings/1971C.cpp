//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int a ,b, c ,d ;
        cin >> a >> b >> c >> d ; 
        if(a > b)
        {
            int temp = a ;
            a = b ;
            b = temp ;
        }

       if(( c > a && c < b && (d < a || d > b)) || ((c < a || c > b )&& d > a && d < b))
       {
        cout << "YES" << endl;
       }
       else
       {
        cout << "NO" << endl;
       }
    }
}
