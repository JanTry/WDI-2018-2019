#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int N=5;

int pary(int tab[N][N],double iloczyn){
    int t[N+4][N+4];
    int licznik=0;
    for(int i=2;i<N+2;i++)
        for(int j=2;j<N+2;j++)
            t[i][j]=tab[i-2][j-2];
    for(int i=0;i<N+4;i++){
        t[0][i]=-1;
        t[1][i]=-1;
        t[i][0]=-1;
        t[i][1]=-1;
        t[N+3][i]=-1;
        t[N+2][i]=-1;
        t[i][N+2]=-1;
        t[i][N+3]=-1;
    }
    for(int i=2;i<N;i++)
        for(int j=2;j<N+2;j++){
            if(1.0*t[i][j]/t[i-2][j-1]==iloczyn) licznik++;
            if(1.0*t[i][j]/t[i-1][j-2]==iloczyn) licznik++;
            if(1.0*t[i][j]/t[i+2][j-1]==iloczyn) licznik++;
            if(1.0*t[i][j]/t[i-2][j+1]==iloczyn) licznik++;
            if(1.0*t[i][j]/t[i-1][j+2]==iloczyn) licznik++;
            if(1.0*t[i][j]/t[i+2][j+1]==iloczyn) licznik++;
            if(1.0*t[i][j]/t[i+1][j+2]==iloczyn) licznik++;
            if(1.0*t[i][j]/t[i+1][j-2]==iloczyn) licznik++;
        }
    return licznik;
}




int main()
{
    int tab[N][N];
    double iloczyn;
    cin>>iloczyn;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            cin>>tab[i][j];
    cout<<pary(tab,iloczyn)<<endl;
}
