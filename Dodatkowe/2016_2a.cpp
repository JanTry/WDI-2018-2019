#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N=100;

int main()
{
    srand( time( NULL ) );
    unsigned long long b=1;
    int tab[N];
    for(int i=0;i<N;i++){
        int a=rand();
        tab[i]=a%1000+1;
    }
    int t[10];
    for(int i=0;i<10;i++)
        t[i]=0;
    for(int i=0;i<N;i++)
        if(tab[i]>t[9]){
            t[9]=tab[i];
            for(int i=9;i>0;i--){
                if(t[i]>t[i-1])
                swap(t[i],t[i-1]);
            }
        }
    for(int i=0;i<10;i++){
        b=b+t[i];
        }
    cout<<b;
}
