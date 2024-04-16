//AvisCodeX
#include<bits/stdc++.h>
using namespace std ;


int main()
{
    int n ;
    cin >> n ;
    
    int a , b , c , count = 0 ;
    cin >> a >> b ;

    for(int i = 2 ; i < n ; i++)
    {
        cin >> c ;
        if(( b > a && b > c ) || ( b < a && b < c ) ) count++ ;
        a = b ;
        b = c ;

    }

    cout << count << endl ;

    return 0 ;
}