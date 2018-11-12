//c++
#include <iostream>
#include <cstdio>
#include <cmath>
#include <stack>

using namespace std;

const int N=10;

void sprawdz(int tab[N], bool niep[N]){
        for(int i=0;i<N;i++){
        if(tab[i]%2==1)
            niep[i]=1;
        else
            niep[i]=0;
    }
}

int main()
{
    int tab[N];
    bool niep[N];
    sprawdz(tab, niep);
    int dl=0;
    for(int i=0;i<N;i++){
        if(niep[i]==1)
        for(int k=0;k<N-i;k++){
            if(niep[k]==1){
                stack<int>b;
                int a=0;
                for(int j=i;j<(k+1)/2;j++)
                {
                    if(niep[j]==1){
                        b.push(tab[j]);
                    }
                }
                bool q=1;
                for(int j=k+1;j>(k+1)/2;j--)
                {
                    if(niep[j]==1){
                        if(tab[j]==b.top())
                            b.pop();
                        else
                            q=0;
                    }
                }
                if(q) if(k>dl) dl=k;
            }
        }
    }
    cout<<dl;
}
