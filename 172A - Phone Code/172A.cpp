//AvisCodeX

#include<bits/stdc++.h>
using namespace std;

int main()
{
        long long int  i , j , k ;
        long long int n , cal = 0 ;
        bool flag=true;

        cin >> n ;
        string a[n] ;

        for( i = 0 ; i < n ; i++ )
        {
            cin >> a[i] ;
        }
        long long int l = a[0].length();

        for( i = 0 ; i < l ; i++ )
        {
            for( j = 0 ; j < n - 1 ; j++ )
            {
                if( a[j][i] == a[j+1][i] )
                    continue ;
                else
                {
                    flag = false ;
                    break ;
                }
            }

            if( flag == true )
                cal++ ;
            else
                break ;
        }

        cout << cal ;

        return 0 ;
}