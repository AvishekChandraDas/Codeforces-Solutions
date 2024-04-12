//AvisCodeX

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, i, b, sum = 0;
    cin >> a;

    if(a >= 1 && a <= 100)
    {
        for( i = 1 ; i <= a ; i++ )
        {
            cin >> b;
            sum += b;
        }
        if( sum == 0 )
        {
            cout << "EASY" << endl;
        }
        else
        {
            cout << "HARD" << endl;
        }
    }

    return 0;
}
