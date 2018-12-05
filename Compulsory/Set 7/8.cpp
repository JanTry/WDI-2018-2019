#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int M=1000000;
const int N=8;

int koszt(int tab[N][N],int price, int w, int k)
{
    if(k<0 || k>7) return M;
    if(w==7)return price;
    int b=M;
    int a=koszt(tab, price+tab[w+1][k], w+1, k);
    if(k>=1) b=koszt(tab,price+tab[w+1][k-1],w+1, k-1);
    if(b<a)a=b;
    if(k<=6)b=koszt(tab,price+tab[w+1][k+1],w+1,k+1);
    if(b<a)a=b;
    return a;
}

int supkoszt(int tab[N][N])
{
    int a;
    int b=M;
    for(int i=0;i<N;i++){
        a=koszt(tab,tab[0][i],0,i);
        if(a<b)  b=a;
    }
    return b;
}

int main()
{
    int tab[N][N];
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            tab[i][j]=1;
    cout<<supkoszt(tab);
}
