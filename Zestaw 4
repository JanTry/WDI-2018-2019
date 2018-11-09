//C++
//2
const int MAX=3;
int tab[MAX][MAX];

bool wiersz(int i)
{
    int p;
    bool q;
    for(int j=0;j<MAX;j++)
    {
        q=1;
        while(tab[i][j]>0)
        {
        p=tab[i][j]%10;
        tab[i][j]/=10;
        if(p%2==0)
            q=0;

        }
        if(q==1)
            return 1;
    }
    return 0;
}

void 2(){
    for(int i=0;i<MAX;i++)
        for(int j=0;j<MAX;j++)
        cin>>tab[i][j];
    bool q=1;
    for(int i=0;i<MAX;i++)
    {
        if(wiersz(i)!=1)
            q=0;
    }
    if(q)
        cout<<"TAK";
    else
        cout<<"NIE";
}

//3
const int MAX=3;
int tab[MAX][MAX];

bool wiersz(int i)
{
    bool q;
    int p=0;
    for(int j=0;j<MAX;j++)
    {
        q=0;
        while(tab[i][j]>0)
        {
            p=tab[i][j]%10;
            tab[i][j]/=10;
            p=p%2;
            if(p==0)
                q=1;
        }
        if (q==0) return 0;
    }
    return 1;
}

void 3(){
    for(int i=0;i<MAX;i++)
        for(int j=0;j<MAX;j++)
            cin>>tab[i][j];
    bool q=0;
    for(int i=0;i<MAX;i++)
    {
        if(wiersz(i)==1)
            q=1;
    }
    if(q)
        cout<<"TAK";
    else
        cout<<"NIE";

}
