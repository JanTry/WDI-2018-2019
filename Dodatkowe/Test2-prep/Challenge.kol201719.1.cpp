#include<iostream>
using namespace std;
const int N=100;
bool p(int t[N], int n,int f[N],int l){
    if(l==N){
        for(int i=0;i<N-1;i++)if(t[i]!=t[i+1])return 0;
        return 1;
    }
    for(int i=0;i<n;i++){
        f[i]+=t[N];
        if(p(t,n,f,l+1))return 1;
        f[i]+-t[N];
    }
    return 0;
}
int k(int t[N]){
    int suma=0,f[N];
    for(int i=0;i<N;suma+=t[i++]);
    for(int i=0;i<N;i++)if(p(t,i,f,0))return i;
    return 0;
}



int main(){}
