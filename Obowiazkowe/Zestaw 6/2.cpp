#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int N=5;

bool mozliwe(int t[N], int masa, int pocz)
{

    for(int i=pocz;i>=0;i--){
        int m=masa;
        m-=t[i];
        if(m==0) return 1;
        if(mozliwe(t, m, i-1)) return 1;

        m= masa;
        m+=t[i];
        if(m==0) return 1;
        if(mozliwe(t,m,i-1)) return 1;
    }
    return 0;
}

int main()
{
    int t[N];
    for(int i=0;i<N;i++)
        cin>>t[i];
    int masa;
    cin>>masa;
    if(mozliwe(t, masa, N-1))
        cout<<"Mozliwe! ";
        else
        cout<<"Nie mozliwe! ";
}
/* 35 15 39 39 39 15 39 2 2 2 */
