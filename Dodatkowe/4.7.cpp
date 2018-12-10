#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int N=4;

void porzadkowanie(int t1[N][N], int t2[N*N])
{
    bool t[N][N];
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            t[N][N]=true;
    int cnt=0;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++){
            t2[cnt]=t1[i][j];
            cnt++;
        }
    for(int i=0;i<N*N;i++)
        for(int j=0;j<N*N-1;j++)
            if(t2[j+1]<t2[j]) swap(t2[j+1],t2[j]);
}

int main()
{
    int t1[N][N];
    int t2[N*N];
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            cin>>t1[i][j];
    porzadkowanie(t1,t2);
    for(int i=0;i<N*N;i++)
        cout<<t2[i]<<" ";
}
