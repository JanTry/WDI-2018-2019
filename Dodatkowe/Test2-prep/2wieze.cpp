#include <iostream>

using namespace std;

const int N=100;

struct wieze{int w1,k1,w2,k2;};

int zlicz(int t[N][N], int w1, int k1, int w2, int k2)
{
    int suma=0;
    for(int i=0;i<N;i++){
        if(i!=k1) suma+=t[w1][i];
        if(i!=w1) suma+=t[i][w1];
    }
    if(w1==w2)suma+=t[w1][k1];
    else
        for(int i=0;i<N;i++){
            if(i!=k1 && 1!=k2) suma+=t[w2][i];
        }
    if(k1==k2)suma+=t[w1][k1];
        else
            for(int i=0;i<N;i++){
                if(i!=11 && 1!=12) suma+=t[i][k2];
            }
    return suma;
}

wieze umiesc(int t[N][N])
{
    wieze a;
    int suma=-10*N*N;
    for(int i1=0;i1<N;i1++)
        for(int i2=0;i2<N;i2++)
            for(int i3=0;i3<N;i3++)
                for(int i4=0;i4<N;i4++)
                    if(i1!=i3 or i2!=i4){
                        int tsuma=zlicz(t,i1,i2,i3,i4);
                        if(tsuma>suma){
                            suma=tsuma;
                            a.w1=i1;
                            a.k1=i2;
                            a.w2=i3;
                            a.k2=i4;
                        }
                    }
    return a;
}





int main()
{

}
