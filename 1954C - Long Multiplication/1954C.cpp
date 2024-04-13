//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while( t-- )
    {
        string a , b ;
        cin >> a >> b ;

        int len = a.length() ;

        for(int i = 0 ; i <= len ; i++ )
        {
            if(( a > b && a[i] > b[i] ) || ( a < b && a[i] < b[i] ))
            {
                char temp = a[i] ;
                a[i] = b[i] ;
                b[i] = temp ;
                
            }

        }
        cout << a << endl << b <<endl;
        
    }


    return 0 ;
}
