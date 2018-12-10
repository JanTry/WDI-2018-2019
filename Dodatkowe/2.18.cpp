#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int N=100000;

int main()
{
    bool pierwsze[N];
    /*for(int i=2;i<sqrt(N);i++){
        if(pierwsze[i]){
            int a=i;
            while(a+i<=N){
                a=a+i;
                pierwsze[a]=false;
            }
        }
    }*/
    for(int i=2;i<N;i++){
        int a=i;
        int b=0;
        int c=0;
        int d=0;
        while(a>0)
        {
            c=c+a%10;
            a=a/10;
        }
        a=i;
        for(int j=2;j<=a;j++){
                    while(a%j==0)
                    {
                        b=j;
                        while(b>0){
                            d+=b%10;
                            b=b/10;
                        }
                        a/=j;
                    }
        }
        if(d==c) cout<<i<<" ";
        //if(i%20==0) cout<<endl;
    }
}
