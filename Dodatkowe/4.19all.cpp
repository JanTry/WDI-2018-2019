#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int MAX=100;

int iloczyn(int tab[MAX][MAX],double x)
{
    double a,b;
    int q=0;
    for(int i=0;i<MAX;i++)
        for(int j=0;j<MAX;j++)
            for(int k=i;k<MAX;k++)
                if(k==i)
                    for(int p=j+1;p<MAX;p++)
                    {
                        if(1.0*tab[i][j]/tab[k][p]==x)
                                q++;
                    }
                else
                    for(int p=0;p<MAX;p++)
                    {
                        if(1.0*tab[i][j]/tab[k][p]==x)
                            q++;
                    }

    return q;
}

int main()
{
    double x;
    int a,b;
    int tab[MAX][MAX];
}
