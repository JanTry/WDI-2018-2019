#include <iostream>

using namespace std;

int tab[8][8];

bool suma(int n, bool wiersze[8], int k=0, int w=0){ //suma(n, wiersze)
    if(n==0 && w>0)return true;
    if(n<0)return false;
    for(int i=0;i<8;i++)
    {
        if(!wiersze[i])
        {
            wiersze[i]=true;
            if(suma(n-tab[i][k], wiersze, k++, w++)) return true;
            wiersze[i]=false;
        }
    }
    if(suma(n, wiersze, k++, w)) return true;
    return false;
}



int main(){
}
