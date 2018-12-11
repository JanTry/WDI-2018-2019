#include <iostream>
#include <cmath>

using namespace std;

const int N=100;

int policz(int t[N][N], int w1, int k1, int w2, int k2)
{
    int suma=0;
    for(int i=0;i<N;i++){
        if(i!=k1)suma+=t[w1][i];
        if(i!=w1)suma+=t[i][k1];
    }
    for(int i=0;i<N;i++){
        if(i!=k2 and i!=k1 and w1!=w2)suma+=t[w2][i];
        if(i!=w1 and i!=w2 and k1!=k2)suma+=t[i][k2];
    }
    return suma;
}

bool ruch(int t[N][N], int w1, int k1, int w2, int k2)
{
    int maxsuma=policz(t, w1, k1, w2, k2);
    int poczsuma=maxsuma;
    int suma=0;
    for(int i=0; i<N;i++)
    {
        suma=policz(t, w1, i, w2, k2);
        if(suma>maxsuma)maxsuma=suma;
        suma=policz(t, 1, k1, w2, k2);
        if(suma>maxsuma)maxsuma=suma;
        suma=policz(t, w1, k1, i, k2);
        if(suma>maxsuma)maxsuma=suma;
        suma=policz(t, w1, k1, w2, i);
        if(suma>maxsuma)maxsuma=suma;
    }
    return maxsuma>poczsuma;
}



int main()
{

}
