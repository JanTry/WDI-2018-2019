#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int N=10;

int podciag(int tab[N])
{
    int maxdl=0;
    for(int i=1;i<N;i++)
    {
        int dl=2;
        double q=1.0*tab[i]/tab[i-1];
        for(int j=i+1;j<N;j++)
        {
            if(1.0*tab[j]/tab[j-1]==q) dl++;
            else
                break;
        }
        if (dl>maxdl) maxdl=dl;
    }
    return maxdl;
}

int main()
{
    int tab[N];
    for(int i=0;i<N;i++)
        cin>>tab[i];
    cout<<podciag(tab)<<endl;
}
