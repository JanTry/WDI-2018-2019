//c++
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int N=1000;

int podciag(int tab[N])
{
    int maxdl=0;
    for(int i=0;i<N;i++)
    {
        int dl=0;
        for(int j=i;j<N;j++)
        {
            if(tab[j]==j)
                dl++;
            else
                break;
        }
        if(dl>maxdl) maxdl=dl;
    }
    return maxdl;
}

int main()
{
    int tab[N];
    /*for(int i=0;i<N;i++)
        cin>>tab[i]; */
    cout<<podciag(tab);
}
