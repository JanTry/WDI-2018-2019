//c++
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int N=2;

bool wiersz(int tab[N][N]){
    for(int i=0;i<N;i++){
        bool q=true;

        for(int j=0;j<N;j++){
            int a=tab[i][j];
            bool w=false;

            while(a>0){
                if(a%10==2 || a%10==3 | | a%10==5 || a%10==7){
                    w=true;
                    break;
                }
                a=a/10;
            }
            if(!w) q=false;
        }
        if(q) return true;
    }
    return false;

}

int main()
{
    int tab[N][N];
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            cin>>tab[i][j];

    //2,3,5,7
    bool a=wiersz(tab);

    if(a)
        cout<<"ISTNIEJE";
    else
        cout<<"NIE ISTNIEJE";
}
