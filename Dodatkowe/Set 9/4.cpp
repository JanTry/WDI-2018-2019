#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

const int N=100;

struct node{
    int val;
    node *next;
};


void zwieksz(node *&first)
{
    node *p, *q;
    p=first;
    while(p->next!=NULL)p=p->next;
    p->val=p->val+1;
    while(p->val=10){
        if(p==first){
            q=new node;
            q->val=1;
            p->val=0;
            q->next=first;
            first=p=q;
        }
        else{
            p->val=0;
            q=first;
            while(q->next!=p)q=q->next;
            q->val=q->val+1;
            p=q;
        }
    }
}

int main()
{

}
