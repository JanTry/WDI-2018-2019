#include <iostream>
#include <cmath>


using namespace std;

const int N=100;

bool pierwsza(int a)
{
    //...
}

void wykresl(int t[N], int tab[N],  int i,  int &licz, int a=0) //wykresl(t, d)
{
    if(i<0){ if(a>9 && pierwsza(a)) {tab[licz]=a; licz++;}}
    else{
        wykresl(t,tab,i-1, licz, a*10 + t[i]);
        wykresl(t,tab,i-1, licz, a);
    }
}







int main()
{
    int a;
    int t[N],tab[N];
    for(int i=0;i<N;i++){ t[i]=0; tab[i]=0;}
    cin>>a;
    int b=a;
    int d=0;
    for(int i=0;a>0;i++)
    {
        t[i]=a%10;
        a/=10;
        d=i;
    }
    int licz=0;
    wykresl(t,tab,d, licz);
    for(int i=1;i<licz;i++)
        for(int j=1;j<licz;j++)
            if(tab[i]>tab[j])swap(tab[i],tab[j]);
    for(int i=1;i<licz ; i++)
    {
        if(tab[i]!=tab[i-1])cout<<tab[i]<<endl;
    }
}
