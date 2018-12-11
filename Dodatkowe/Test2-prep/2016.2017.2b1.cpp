#include<iostream>

using namespace std;

const int N=100;

bool pierwsza(int a){
    if(a==1)return false;
    for(int i=2;i*i<=a;i++)if(a%i==0)return false;
    return true;
}

int sumy(int t1[N], int t2[N], int n=0, int s=0){ //sumy(t1,t2);
    if(n==N){
        if(pierwsza(s)){
            cout<<s<<" ";
            return 1;
        }
        return 0;
    }
    return sumy(t1,t2,n+1,s+t1[n]+t2[n])+sumy(t1,t2,n+1,s+t1[n])+sumy(t1,t2,n+1,s+t2[n]);
}

int main(){}
