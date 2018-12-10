#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

int t[8][8];
int tab[16];

void wypisz(int poz[8])
{
    for(int i=0;i< 18; i++)
    {
        cout<<poz[i];
        cout<<endl;
    }
    cout<<endl<<endl<<endl;
}

bool poss(int w, int k, int nw, int nk)
{
    int a=t[w][k];
    while(a>10)
        a=a/10;
    if (a==t[nw][nk]%10) return true;
    else return false;
}

bool krol(int w, int k, int n=0)
{
    if(w==7 && k==7){wypisz(tab); return true;}
    if(w<7 && poss(w, k, w+1, k)){
        tab[n]=1;
        if(krol(w+1, k,n+1)) return true;
    }
    if(k<7 && poss(w, k, w, k+1)){
        tab[n]=3;
        if(krol(w, k+1,n+1)) return true;
    }
    if(k<7 && w<7 && poss(w, k, w+1, k+1)){
        tab[n]=2;
        if(krol(w+1, k+1,n+1)) return true;
    }
    return false;
}



int main()
{

}
