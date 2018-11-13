#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N=4;

/*void wypelnij(int tab[N][N])
{
    srand(time(NULL));
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            tab[i][j]=rand()%10+1;
}
*/
int zamiana(int liczba)
{
    bool tab[10];
    for(int i=0;i<10;i++)
        tab[i]=false;
    int a=0;
    int x=1;
    while (liczba>0)
    {
        tab[liczba%10]=true;
        liczba/=10;
    }
    for(int j=0;j<10;j++)
    {
        if(tab[j]) a=a+x;
        x*=2;
    }
    return a;
}

int przyjaciolki(int tab[N][N])
{
    int cnt=0;
    int t[N+2][N+2];
    for(int i=1;i<N+1;i++)
        for(int j=1;j<N+1;j++)
           t[i][j]=zamiana(tab[i-1][j-1]);
    for(int i=1;i<N+1;i++)
    {
        t[0][i]=t[1][i];
        t[i][0]=t[i][1];
        t[N+1][i]=t[N][i];
        t[i][N+1]=t[i][N];
    }
    t[0][0]=t[1][1];
    t[0][N+1]=t[1][N];
    t[N+1][N+1]=t[N][N];
    t[N+1][0]=t[N][1];
    for(int i=1;i<N+1;i++){
        for(int j=1;j<N+1;j++){
            if(t[j-1][i-1]==t[i][j] &&
               t[j-1][i]==t[i][j] &&
               t[j-1][i+1]==t[i][j] &&
               t[j][i+1]==t[i][j] &&
               t[j+1][i+1]==t[i][j] &&
               t[j+1][i-1]==t[i][j] &&
               t[j+1][i]==t[i][j] &&
               t[j][i-1]==t[i][j]){
                    cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    int tab[N][N];
    //wypelnij(tab);
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            cin>>tab[i][j];
    cout<<przyjaciolki(tab);
}

/*
4 4 4 4
4 4 4 4
4 4 4 4
4 4 4 4
*/
