#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int N=100;

void podzial(int number, int t[N], int q, int cnt)
{
    if(number==0){
        for(int i=0;i<cnt;i++)
        {
            if(t[i]!=0)cout<<t[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(number>0)
    for(int i=q; i>0; i--)
    {
        t[cnt]=i;
        podzial(number-i, t, i, cnt+1);
    }
}

int main()
{
    int number;
    cin>>number;
    int t[N];
    for(int i=0;i<N;i++) t[i]=0;
    podzial(number,t,number, 0);
}
