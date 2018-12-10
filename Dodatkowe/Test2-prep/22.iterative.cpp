#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

const int N=100;

bool calk(int a=0, int b=0, int c=0)
{
    //...
}
bool rown(int a=0,int b=0,int c=0)
{
    //...
}

bool mozliwe(int t[N], int suma, int a, int b, int c)
{
    if(calk(a,b,c)) if(rown(a, b, c)==suma) return true;
    if(calk(a,b)) if(rown(a,b)+c==suma) return true;
    if(a+b+c==suma) return true;
    if(calk(a+b,c)) if(rown(a+b,c)==suma) return true;
    return false;
}

bool possible( int t[N],int  suma)
{
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            for(int k=0;k<N;k++)
                if(j!=i && i!=k){
                    if (mozliwe(t, suma,  i, j, k)) return true;
                }
    return false;
}


int main()
{

}
