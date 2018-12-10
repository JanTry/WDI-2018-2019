#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int N=6;

bool pierwsza(int a)
{
    if (a<2) return 0;
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0) return 0;
    }
    return 1;
}

bool pociecie(int tab[N], int pocz)
{
    if (pocz==N) return 1;
    long long a=0;
    while(pocz<N)
    {
        a=a*2;
        a=a+tab[pocz];
        if(pierwsza(a)){
            if(pociecie(tab, pocz+1)) return 1;
        }
        pocz++;
    }
    return 0;
}
// 1 1 0 1 0 0
int main()
{
    int tab[N];
    for(int i=0;i<N;i++) cin>>tab[i];
    if(pociecie(tab, 0))cout<<"TAK"<<endl;
    else
        cout<<"NIE"<<endl;

}
