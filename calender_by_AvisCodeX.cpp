//AvisCodeX

#include<bits/stdc++.h>
using namespace std ;

int dd , mm , yy ;
int arr[15][15] = {{0},{0,1,7,18,29,35,46,57,63,74,85,91},{0,2,13,19,30,41,47,58,69,75,86,97},{0,3,14,25,31,42,53,59,70,81,88,98},{0,5,11,22,33,39,50,61,67,78,89,95},{0,6,17,23,34,45,51,62,73,79,90},{0,9,15,26,37,43,54,65,71,82,93,99},{0,10,21,27,38,49,55,66,77,83,94},{0,4,32,60,88},{0,8,36,64,92},{0,12,40,68,96},{0,16,44,72,2100},{0,20,48,76},{0,24,52,80},{0,28,56,84}};

void day(int a)
{
    if(a==1)
    {
        cout << "SUNDAY" << " ";
    }
    else if(a==2)
    {
        cout << "MONDAY" << " ";
    }
    else if(a==3)
    {
        cout << "TUESDAY" << " ";
    }
    else if(a==4)
    {
        cout << "WEDNESDAY" << " ";
    }
    else if(a==5)
    {
        cout << "THRUSDAY" << " ";
    }
    else if(a==6)
    {
        cout << "FRIDAY" << " ";
    }
    else if(a==7)
    {
        cout << "SATERDAY" << " ";
    }
}

void calender(int a)
{
    bool k = 0 ;
    for(int i = 1 ; i < 8 ; i++ )
    {
        day(i) ;
    }
    cout << endl;
    for(int i = 1 ; i < 6 ; i++ )
    {
        for(int j = 1 ; j < 8 ; j++ )
        {
            if(j==a) k = 1 ;
            if(a>31) k = 0 ;
            if(k)
            {
                if(a<10) cout <<"0";
                cout << a << "   " ;
                a++ ;
            }
            else 
            {
                cout <<"00"<< "   " << endl;
            }
        }
        cout << endl;
    }
}

void A(int a)
{
    int f = a + 1 ;
    f = f % 7 ;
    day(f);
    calender(f); 
}
void B(int a)
{
    int f = a + 2 ;
    f = f % 7 ;
    day(f);
    calender(f); 
}
void C(int a)
{
    int f = a + 3 ;
    f = f % 7 ;
    day(f);
    calender(f);
}
void D(int a)
{
    int f = a + 4 ;
    f = f % 7 ;
    day(f);
    calender(f);
}
void E(int a)
{
    int f = a + 5 ;
    f = f % 7 ;
    day(f);
    calender(f);
}
void F(int a)
{
    int f = a + 6 ;
    f = f % 7 ;
    day(f);
    calender(f);
}
void G(int a)
{
    int f = a + 7 ;
    f = f % 7 ;
    day(f);
    calender(f);
}

void s1()
{
    string s = "AADDGBEGCFADF";
    char c = s[mm];
    if(c=='A') A(dd) ;
    else if(c=='B') B(dd) ;
    else if(c=='C') C(dd) ;
    else if(c=='D') D(dd) ;
    else if(c=='E') E(dd) ;
    else if(c=='F') F(dd) ;
    else if(c=='G') G(dd) ;
}
void s2()
{
    string s = "ABEEACFADGBEG";
    char c = s[mm];
    if(c=='A') A(dd) ;
    else if(c=='B') B(dd) ;
    else if(c=='C') C(dd) ;
    else if(c=='D') D(dd) ;
    else if(c=='E') E(dd) ;
    else if(c=='F') F(dd) ;
    else if(c=='G') G(dd) ;
}
void s3()
{
    string s = "ACFFBDGBEACFA";
    char c = s[mm];
    if(c=='A') A(dd) ;
    else if(c=='B') B(dd) ;
    else if(c=='C') C(dd) ;
    else if(c=='D') D(dd) ;
    else if(c=='E') E(dd) ;
    else if(c=='F') F(dd) ;
    else if(c=='G') G(dd) ;
}
void s4()
{
    string s = "AFBBEGCEADFBD";
    char c = s[mm];
    if(c=='A') A(dd) ;
    else if(c=='B') B(dd) ;
    else if(c=='C') C(dd) ;
    else if(c=='D') D(dd) ;
    else if(c=='E') E(dd) ;
    else if(c=='F') F(dd) ;
    else if(c=='G') G(dd) ;
}
void s5()
{
    string s = "AGCCFADFBEGCE";
    char c = s[mm];
    if(c=='A') A(dd) ;
    else if(c=='B') B(dd) ;
    else if(c=='C') C(dd) ;
    else if(c=='D') D(dd) ;
    else if(c=='E') E(dd) ;
    else if(c=='F') F(dd) ;
    else if(c=='G') G(dd) ;
}
void s6()
{
    string s = "ADGGCEACFBDGB";
    char c = s[mm];
    if(c=='A') A(dd) ;
    else if(c=='B') B(dd) ;
    else if(c=='C') C(dd) ;
    else if(c=='D') D(dd) ;
    else if(c=='E') E(dd) ;
    else if(c=='F') F(dd) ;
    else if(c=='G') G(dd) ;
}
void s7()
{
    string s = "AEAADFBDGCEAC";
    char c = s[mm];
    if(c=='A') A(dd) ;
    else if(c=='B') B(dd) ;
    else if(c=='C') C(dd) ;
    else if(c=='D') D(dd) ;
    else if(c=='E') E(dd) ;
    else if(c=='F') F(dd) ;
    else if(c=='G') G(dd) ;
}
void s8()
{
    string s = "ADGADFBDGCEAC";
    char c = s[mm];
    if(c=='A') A(dd) ;
    else if(c=='B') B(dd) ;
    else if(c=='C') C(dd) ;
    else if(c=='D') D(dd) ;
    else if(c=='E') E(dd) ;
    else if(c=='F') F(dd) ;
    else if(c=='G') G(dd) ;
}
void s9()
{
    string s = "ABEFBDGBEACFA";
    char c = s[mm];
    if(c=='A') A(dd) ;
    else if(c=='B') B(dd) ;
    else if(c=='C') C(dd) ;
    else if(c=='D') D(dd) ;
    else if(c=='E') E(dd) ;
    else if(c=='F') F(dd) ;
    else if(c=='G') G(dd) ;
}
void s10()
{
    string s = "AGCDGBEGCFBDF";
    char c = s[mm];
    if(c=='A') A(dd) ;
    else if(c=='B') B(dd) ;
    else if(c=='C') C(dd) ;
    else if(c=='D') D(dd) ;
    else if(c=='E') E(dd) ;
    else if(c=='F') F(dd) ;
    else if(c=='G') G(dd) ;
}
void s11()
{
    string s = "AEABEGCEADFBD";
    char c = s[mm];
    if(c=='A') A(dd) ;
    else if(c=='B') B(dd) ;
    else if(c=='C') C(dd) ;
    else if(c=='D') D(dd) ;
    else if(c=='E') E(dd) ;
    else if(c=='F') F(dd) ;
    else if(c=='G') G(dd) ;
}
void s12()
{
    string s = "ACFGCEACFBDGB";
    char c = s[mm];
    if(c=='A') A(dd) ;
    else if(c=='B') B(dd) ;
    else if(c=='C') C(dd) ;
    else if(c=='D') D(dd) ;
    else if(c=='E') E(dd) ;
    else if(c=='F') F(dd) ;
    else if(c=='G') G(dd) ;
}
void s13()
{
    string s = "AADEACFADGBEG";
    char c = s[mm];
    if(c=='A') A(dd) ;
    else if(c=='B') B(dd) ;
    else if(c=='C') C(dd) ;
    else if(c=='D') D(dd) ;
    else if(c=='E') E(dd) ;
    else if(c=='F') F(dd) ;
    else if(c=='G') G(dd) ;
}
void s14()
{
    string s = "AFBCFADFBEGCE";
    char c = s[mm];
    if(c=='A') A(dd) ;
    else if(c=='B') B(dd) ;
    else if(c=='C') C(dd) ;
    else if(c=='D') D(dd) ;
    else if(c=='E') E(dd) ;
    else if(c=='F') F(dd) ;
    else if(c=='G') G(dd) ;
}

void serial(int a)
{
    if(a==1) s1() ;
    else if(a==2) s2() ;
    else if(a==3) s3() ;
    else if(a==4) s4() ;
    else if(a==5) s5() ;
    else if(a==6) s6() ;
    else if(a==7) s7() ;
    else if(a==8) s8() ;
    else if(a==9) s9() ;
    else if(a==10) s10() ;
    else if(a==11) s11() ;
    else if(a==12) s12() ;
    else if(a==13) s13() ;
    else if(a==14) s14() ;
}

void year()
{
    int y = yy % 100 ;
    for(int i = 1 ; i < 15 ; i++ )
    {
        for(int j = 1 ; j < 12 ; j++ )
        {
            if(arr[i][j] == y)
            {
                serial(i) ;
            }
        }
    }
}


int main()
{
    cout << "Enter the date by this format : dd mm yy " << endl;
    cout << "For example : 24 03 2024 " << endl;

    cin >> dd >> mm >> yy ; 
    
    year();


}