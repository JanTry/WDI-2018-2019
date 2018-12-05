#include <iostream>
#include <cstdio>
#include <cmath>
//detA
using namespace std;

const int N=3;

void detm(int m[N][N], int m1[N][N], int j,int v )
{
    for(int i=0;i<v;i++)
    {
        for(int k=0;k<v;k++)
        {
            if(k>=j)m1[i][k]=m[i+1][k+1];
                else
                m1[i][k]=m[i+1][k];
        }
    }
}

int pot(int i)
{
    int k=1;
    for(int j=0;j<i;j++)
    {
        k=k*-1;
    }
    return k;
}

int det(int m[N][N], int v)
{
    int p=0;
    if(v==1) return m[0][0];
    for(int i=0; i<v; i++)
    {
        int m1[N][N];
        detm(m, m1, i, v-1);
        p+=pot(i)*m[0][i]*det(m1, v-1);
    }
    return p;
}



int main()
{
    int m[N][N];
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            cin>>m[i][j];
    cout<<det(m,N);
}
