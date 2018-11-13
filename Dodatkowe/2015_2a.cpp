#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N=10000;

void wypelnij(int tab[N])
{
    for(int i=0;i<N;i++)
        tab[i]=rand()%99+1;
}

int dod(int tab[N])
{
    int a=tab[1]-tab[0];
    int k;
    int maxdl=0;
    int dl=1;
    for(int i=0;i<N-1;i++){
        if(a>0){
            if(tab[i+1]-tab[i]>0){
                if(tab[i+1]-tab[i]==a){
                    dl++;
                    if(dl>maxdl) maxdl=dl;
                }
                else{
                    dl=2;
                    a=tab[i+1]-tab[i];
                }
            }
            else{
                dl=1;
                a=tab[i+1]-tab[i];
            }
        }
        else{
            dl=1;
            a=tab[i+1]-tab[i];
        }
    }
    return maxdl;
}
int od(int tab[N])
{
    int a=tab[1]-tab[0];
    int k;
    int maxdl=0;
    int dl=1;
    for(int i=0;i<N-1;i++){
        if(a<0){
            if(tab[i+1]-tab[i]<0){
                if(tab[i+1]-tab[i]==a){
                    dl++;
                    if(dl>maxdl) maxdl=dl;
                }
                else{
                    dl=2;
                    a=tab[i+1]-tab[i];
                }
            }
            else{
                dl=1;
                a=tab[i+1]-tab[i];
            }
        }
        else{
            dl=1;
            a=tab[i+1]-tab[i];
        }
    }
    return maxdl;
}



int main()
{
    int tab[N];
    wypelnij(tab);
    cout<<dod(tab)-od(tab)<<endl;
}
