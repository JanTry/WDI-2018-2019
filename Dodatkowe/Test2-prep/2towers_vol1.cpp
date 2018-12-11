#include <iostream>
#include <cmath>
#include <cstdio>
#include <ctime>
#include <algorithm>
#include <cstdlib>


using namespace std;

const int N=15;


int zlicz(int t[N][N], int w, int k, int w1=-1, int k1=-1)
{
    int suma=0;
    for(int i=0;i<N;i++)
        if(i!=k and i!= k1) suma+=t[w][i];
    if(k!=k1)
    for(int i=0;i<N;i++)
        if(i!=w and i!= w1) suma+=t[i][k];
    return suma;
}


void ustawienia(int t[N][N])
{
    int w=0,kol=0;
    int w1=0, k1=0;
    int suma=0;
    int maxsuma=0;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++){
            suma=zlicz(t, i, j);
            int f=suma;
            for(int k=i+1;k<N;k++){
                for(int p=0;p<N;p++){
                    suma=f;
                    if(p!=j){
                        suma+=zlicz(t, k, p, i, j);
                        if(suma>maxsuma){
                        maxsuma=suma;
                        w=i;
                        kol=j;
                        w1=k;
                        k1=p;
                        }
                    }
                }
            }

        }
    cout<<w<<" "<<kol<<endl<<w1<<" "<<k1<<endl;
}



int main()
{
    srand(time(NULL));
    int t[N][N];
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) t[i][j]=(rand()%10);
    ustawienia(t);
}
