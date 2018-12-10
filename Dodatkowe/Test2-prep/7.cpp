#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int N=6;
const int M=10000;

bool pozdbior(int tab[N], int pocz, int suma, int idsuma, int &liczba, int l, int &msuma)
{
    if(suma!=0 && suma==idsuma){
        if(l<liczba){
            liczba=l;
            msuma=suma;
        }
        return suma;
    }
    if(l>=liczba) return false;
    if(pocz>=N) return false;
    else{
        pozdbior(tab,pocz+1,suma+tab[pocz],idsuma+pocz,liczba, l+1, msuma);
        pozdbior(tab,pocz+1,suma, idsuma, liczba , l, msuma);
        if(liczba!=M){ return true;} else return false;
    }
}

bool sup_podzbior(int tab[N], int &liczba, int &msuma)
{
    int pocz=0,suma=0,idsuma=0, l=0;
    liczba=M;
    msuma=0;
    if(pozdbior(tab,pocz, suma, idsuma, liczba, l , msuma)){return 1; }
    else return 0;
}
// 1 7 3 5 11 2
int main()
{
    int tab[N], liczba, msuma;
    for(int i=0;i<N;i++) cin>>tab[i];
    if(sup_podzbior(tab, liczba, msuma))
        cout<<endl<<msuma<<endl;
    else
        cout<<endl<<"Nie ma takiego pozdbioru"<<endl;
}
