#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

const int N=100;


struct kwadrat {int x1,x2,y1,y2;};

bool suma(kwadrat tab[13])
{
    //...
}

bool nienachodza(kwadrat tab[13])
{
    //...
}

bool kwadraty(kwadrat t[N], kwadrat tab[13], int n=0, int licznik=0)
{
    if (n==13) return (nienachodza(tab) && suma(tab)==2012);
    if(kwadraty(t,tab,n+1,licznik)) return true;
    tab[licznik]=t[N];
    if(kwadraty(t,tab,n+1,licznik+1))return true;
    return false;
}

int main()
{

}
