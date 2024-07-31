//AvisCodex

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long int  t ;
    cin >> t ;
    while(t--)
    {
        string s , k , f ;
        cin >> s ;
        int  l = s.length();
        if(l==1)
        {
            int a = s[0];
            if(a<122)
            {
                char c = a + 1;
                cout<<s<<c<<endl;
            }
            else 
            {
                char c = a - 1;
                cout<<s<<c<<endl;
            }
        }
        else
        {
            bool k = 0 ;
            for(int i = 0 ; i < l - 1  ; i++)
            {
                cout<<s[i];
                int a = s[i];
                if(s[i]==s[i+1]&&k==0)
                {
                    if(a<122)
                    {
                        char r = a + 1 ;
                        cout<<r;
                    }
                    else 
                    {
                        char r = a - 1 ;
                        cout<<r;
                    }
                    k = 1 ;
                }
            }
            
            int a = s[l-1];
            cout<<s[l-1];
            if(a<122&&k==0)
            {
                char c = a + 1;
                cout << c ; 
            }
            else if(k==0)
            {
                char c = a - 1;
                cout << c ; 
            }
            cout<<endl;
            
        }

    }
}

