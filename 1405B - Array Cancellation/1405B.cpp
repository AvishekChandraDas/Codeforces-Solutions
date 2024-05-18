//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ; 
    cin >> t ;

    while(t--)
    {
        long long int n , sum = 0 , res = 0 ;
        cin >> n ;
        long long int a ;
        
        for( int i = 0 ; i  < n ; i++ )
        {
            cin >> a;
            if(a > 0 ) sum += a ;
            else
            {
                res = a ;
                if( abs(a) < sum ) sum += a ;
                else sum = 0 ;
            }
        }
        cout << sum << endl ; 

    }


    return 0 ;
}