#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

const int N=100;

struct punkt{float x,y;};

float odl(punkt t[N], int p[N])
{
    float ax=0, ay=0;
    float bx=0, by=0;
    int al=0, bl=0;
    for(int i=0;i<N;i++)
    {
        if(p[i]==1){
            ax+=t[i].x;
            ay+=t[i].y;
            al++;
        }
        if(p[i]==2){
            bx+=t[i].x;
            by+=t[i].y;
            bl++;
        }
    }
    if (al==0 && bl==0) return 1000000;
    if(al==0){
        punkt as, bs;
        as.x=0;
        as.y=0;
        bs.x=bx/bl;
        bs.y=by/bl;
        return sqrt((as.x-bs.x)*(as.x-bs.x)+(as.y-bs.y)*(as.y-bs.y));
    }
    if(bl==0){
        punkt as, bs;
        bs.x=0;
        bs.y=0;
        as.x=ax/al;
        as.y=ay/al;
        return sqrt((as.x-bs.x)*(as.x-bs.x)+(as.y-bs.y)*(as.y-bs.y));
    }
    punkt as, bs;
    as.x=ax/al;
    as.y=ay/al;
    bs.x=bx/bl;
    bs.y=by/bl;
    return sqrt((as.x-bs.x)*(as.x-bs.x)+(as.y-bs.y)*(as.y-bs.y));
}

float podzbiory(punkt t[N], int used[N], int p=0)
{
    if(p==N) odl( t, used);
    else{
        float d=odl( t, used);
        float a=podzbiory(t, used, p+1);
        if(d<a)a=d;
        used[p]=1;
        float b=podzbiory(t, used, p+1);
        if(b<a) a=b;
        used[p]=2;
        float c=podzbiory(t, used, p+1);
        used[p]=0;
        if (c<a) a=c;
        return a;
    }
}


int main()
{
    punkt t[N];
}
