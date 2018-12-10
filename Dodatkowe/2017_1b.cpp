//c++
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int MAX=17;

int main()
{
    int n;
    cin>>n;
    bool niema=true;
    int tab[MAX];
    tab[0]=1;
    tab[1]=1;
    for(int i=2;i<MAX;i++)
        tab[i]=tab[i-1]+tab[i-2];
    for(int i=1;i<1000;i++){
        bool dzielnik=false;
        for(int k=0;k<MAX;k++){
            int a=0;
            for(int j=k;j<MAX;j++)
            {
                a=a+tab[j];
                if(a==n+i)
                    dzielnik=true;
            }
        }
        if(dzielnik==false){
            cout<<n+i<<endl;
            break;
        }
    }
}
