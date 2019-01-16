#include <iostream>
#include <cmath>
#include <cstdio>
//2n+p = n + 2 + i (mod k)
//2n+p - n-w = i (mod k)
//2n+p+2 - n -1 -w= i +2 -1 (mod k)


using namespace std;

const int N=100;

struct node {
    int val;
    node* next;
};

int dlugosc_cyklu (node* f)
{
    //zlozonosc liniowa!!!!
    node *q=f->next->next;
    f=f->next;
    while(f!=q){ //kazdy ruch zmienia roznice pomiedzy pozycjami q i p o dokladnie 1, zatem w maksymalnie k krokach, znajda te same pozycje
        f=f->next;
        q=q->next->next;
    }
    int n=1;
    f=f->next;
    while(f!=q){f=f->next; n++;}
    return n;
}


int main()
{

}
