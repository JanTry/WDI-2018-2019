#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int N=6;
const int M=10000;

bool pozdbior(int tab[N], int pocz, int suma, int idsuma, int &msuma)
{
    if(suma!=0 && suma==idsuma){
        if(suma<msuma) msuma=suma;
        return true;
    }
    if(suma>=msuma) return false;
    if(pocz>=N) return false;
    else{
        pozdbior(tab,pocz+1,suma+tab[pocz],idsuma+pocz,msuma);
        pozdbior(tab,pocz+1,suma, idsuma, msuma);
        if(msuma!=M){ return true;} else return false;
    }
}

bool sup_podzbior(int tab[N], int &msuma)
{
    int pocz=0,suma=0,idsuma=0;
    msuma=M;
    if(pozdbior(tab,pocz, suma, idsuma, msuma)){return 1; }
    else return 0;
}
// 1 7 3 5 11 2
int main()
{
    int tab[N], msuma;
    for(int i=0;i<N;i++) cin>>tab[i];
    if(sup_podzbior(tab, msuma))
        cout<<endl<<msuma<<endl;
    else
        cout<<endl<<"Nie ma takiego pozdbioru"<<endl;
}
