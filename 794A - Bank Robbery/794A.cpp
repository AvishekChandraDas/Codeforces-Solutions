//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long a , b , c ; 
    cin >> a >> b >> c ;
    long n ; 
    cin >> n ;
    long count(0);
    while(n--)
    {
        long x ; 
        cin >> x ; 
        count += ((b < x) && (x < c)) ;
    }
    cout << count << endl ;

    return 0;
}
