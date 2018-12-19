#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

const int N=100;

struct node{
    int val;
    node *next;
};

void dodaj(node *f1, node *f2, node *&first)
{
    node *p1=f1,*p2=f2;
    int n=0;
    node *k1,*k2;
    k1=k2=NULL;
    while(p1!=f1 and p2!=f2){
        p1=f1;
        p2=f2;
        while(p1!=k1)p1=p1->next;
        while(p2!=k2)p2=p2->next;
        node *s;
        s=new node;
        s->val=p1->val+p2->val+n;
        n=0;
        s->next=first;
        first=s;
        k1=p1;
        k2=p2;
        if(s->val>=10){s->val=s->val-10; n=1;}
    }
    while(p1!=f1){
        while(p1!=k1)p1=p1->next;
        node *s;
        s=new node;
        s->val=p1->val+n;
        n=0;
        s->next=first;
        first=s;
        k1=p1;
        if(s->val>=10){s->val=s->val-10; n=1;}
    }
    while(p2!=f2){
        while(p2!=k2)p2=p2->next;
        node *s;
        s=new node;
        s->val=p2->val+n;
        n=0;
        s->next=first;
        first=s;
        k2=p2;
        if(s->val>=10){s->val=s->val-10; n=1;}
    }
    if(n>0){
        node *s;
        s=new node;
        s->val=n;
        s->next=first;
        first=s;
    }



}


int main()
{

}
