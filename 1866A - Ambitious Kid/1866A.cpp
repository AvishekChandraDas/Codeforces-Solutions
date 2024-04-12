//AvisCodeX
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int arr[a];

    for(int i = 0 ; i < a ; i++)
    {
        cin >> arr[i] ;
        if(arr[i] < 0)
        {
            arr[i] = arr[i] * -1 ;
        }
    }

    sort( arr , arr + a );

    cout << arr[0] << endl ;



    return 0;
}