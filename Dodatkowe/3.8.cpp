#include <iostream>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

const int N=1000;

void wypelnij(int tab[N])
{
    for(int i=0;i<N;i++){
        tab[i]=rand()%100+1;
    }
}

bool istnieje(int tab[N])
{
    for(int i=0;i<N;i++)
    {
        int a=tab[i];
        bool q=true;
        while(a>0)
        {
            if(a%2==0){
                q=false;
                break;
            }
            a=a/2;
        }
        if(q) return true;
    }
    return false;
}

int main()
{
    srand(time(NULL));
    int tab[N];
    wypelnij(tab);
    if(istnieje(tab))
        cout<<"Istnieje"<<endl;
    else
        cout<<"Nie istnieje"<<endl;
}
