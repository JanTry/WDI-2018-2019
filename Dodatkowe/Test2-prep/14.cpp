#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

void wypisz(int poz[8])
{
    for(int i=0;i< 8; i++)
    {
        cout<<i<<" "<<poz[i];
        cout<<endl;
    }
    cout<<endl<<endl<<endl;
}

void ustawienie(int n, bool w[8], bool pp[15], bool lp[15], int poz[8])
{
    if(n==7) wypisz(poz);
    else{
        for(int i=0;i<8;i++){
            if(w[i]==false && pp[n-i+7]==false && lp[n+i]==false){
                w[i]=true; pp[n-i+7]=true; lp[n+i]=true; poz[n]=i;
                ustawienie(n+1, w, pp, lp, poz);
                w[i]=false; pp[n-i+7]=false; lp[n+i]=false;
            }
        }
    }
}
void sustawienie()
{
    bool w[8];
    bool pp[15];
    bool lp[15];
    int poz[8];
    for(int i=0;i<8;i++){w[i]=false; poz[i]=0;}
    for(int i=0;i<15;i++){pp[i]=lp[i]==false;}
    ustawienie(0, w, pp, lp, poz);
}



int main()
{
    sustawienie();
}
