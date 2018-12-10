#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

const int N=100;

bool podzbior(int t[8][8], int s, int k, bool w[8])
{
    if(s==0) return true;
    if(k>7) return false;
    else{
        if(podzbior(t, s, k+1, w)) return true;
        for(int i=0;i<8;i++){
            if(w[i]==false){
                w[i]=true;
                if(s-t[i][k]>=0 && podzbior(t, s-t[i][k], k+1, w)) return true;
                w[i]=false;
            }
        }
    }
    return false;
}

int main()
{

}
