//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long int t ;
    cin >> t ;
    while(t--)
    {
        string s ;
        cin >> s ;
        long int l  = s.length(),sum = 1,k=0;
        for( int i = 1 ; i < l ; i++ )
        {
            if(s[i]!=s[i-1])
            {
                sum++ ;
            }
            if(s[i-1]<s[i]) k = 1 ;
        }
        cout << sum - k <<endl;
    }
}
