#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

const int N=100;

bool pierwsza( int k)
{
    //...
}

int possible(int t[N], int  i=0) //possible(t)
{
    if (i==N-1)  return 0;
    else{
        for(int j=0;j<N-i;j++)
            if(pierwsza(j) && t[i]>j && t[i]%j==0){
                int a=possible(t,i+j);
                if(a>=0)return a+1;
            }
    }
    return -1;
}



int main()
{

}
