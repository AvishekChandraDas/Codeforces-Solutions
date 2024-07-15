//AvisCodeX

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        long long int a[n],sum = 0 , max = 0;
        
        for(int i = 0 ; i  < n ; i++)
        {
            cin >> a[i] ;
            if(a[i]>max)
            {
                 max = a[i];
                 a[i]=0;
            }
            else  a[i]= max - a[i];
            
        }
        max = 0 ;
        for(int i = 0 ; i < n ; i++ )
        {
            sum += a[i];
            if(a[i]>max) max = a[i];
        }

        cout<<sum+max<<endl;
        

    }
}