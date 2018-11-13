#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N=100;

void wypelnij(int tab[N][N])
{
    srand(time(NULL));
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            tab[i][j]=rand()%10+1;
}

int wiersz(int tab[N][N])
{
    int maxdl=0;
    int line=0;
    for(int i=0;i<N;i++){
        int dl=1;
        for(int j=0;j<N-1;j++){
            if(tab[i][j]==tab[i][j+1]){
                dl++;
            }
            else{
                if(dl>maxdl){
                    maxdl=dl;
                    line=j;
                }
                dl=0;
            }
        }
    }
    //cout<<maxdl<<endl;
    return line;
}

int main()
{
    int tab[N][N];
    wypelnij(tab);
    cout<<wiersz(tab);
}
