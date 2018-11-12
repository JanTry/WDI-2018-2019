//C++

void 1(){
    int a,b;
    string q="";
    string w="1";
    cin>>a;
    int p;
    cin>>p;

    while(a!=0){
        b=a%p;
        a=a/p;
        if(b>9){
            b=b+7;
        }
        b=b+48;

        w[0]=b;
        q.append(w);
    }
    w=q;
    for(int i=0;i<q.length();i++)
        w[i]=q[q.length()-i-1];
    cout<<w;
}

void 2(){
    string a,b;
    cin>>a>>b;
    int t[10];
    bool q=1;
    for(int i=0;i<10;i++)
    {
        t[i]=0;
    }
    if(a.length()==b.length())
    {
        for(int i=0;i<a.length();i++)
        {
            t[a[i]-48]++;
        }
         for(int i=0;i<b.length();i++)
        {
            t[b[i]-48]--;
        }
    }
    else
        q=0;
    for(int i=0;i<10;i++)
    {
        if(t[i]!=0)
            q=0;
    }
    if (q==1)
    {
        cout<<"TAK";
    }
    else
    {
        cout<<"NIE";
    }
}

void 3(){
int a,b=2,c=2,ct=0;
 cin>>a;
 bool tab[a];
 for(int i=1;i<a;i++)
    tab[i]=1;
 while(b<=sqrt(a))
 {
     while(b*c<a)
     {
        tab[b*c]=0;
        c++;
     }
     while(c!=2)
     {
        b++;
        if(tab[b]==1)
            c=2;
     }
 }
 for(int i=2;i<a;i++)
    if(tab[i]==1)
    {
        cout<<i<<" ";
    }

}

//4
const int MAX=16326;


void 4(){
    int a,b,c;
    int tab[MAX];
    cin>>a;
    for(int i=0;i<MAX;i++)
    {
        tab[i]=0;
    }
    tab[0]=1;
    for(int i=2;i<=a;i++)
    {
        for(int j=0;j<MAX;j++)
        {
            if(tab[j]!=0)
            tab[j]=tab[j]*i;
        }
        for(int j=0;j<MAX;j++)
        {
            if(tab[j]>=1000)
            {
                tab[j+3]=tab[j+3]+tab[j]/1000;
                tab[j]=tab[j]%1000;
            }
            if(tab[j]>=100)
            {
                tab[j+2]=tab[j+2]+tab[j]/100;
                tab[j]=tab[j]%100;
            }
            if(tab[j]>=10)
            {
                tab[j+1]=tab[j+1]+tab[j]/10;
                tab[j]=tab[j]%10;
            }
        }
    }
    int i=0,j=MAX-1;
    while(i==0)
    {
        if(tab[j]!=0)
            i=1;
        j--;
    }
    j++;
    for(i=j;i>=0;i--)
        cout<<tab[i];

}

void 6(){
 int a=1,i=0;
    int tab[100];
    for(int j=0;j<100;j++)
        tab[j]=0;
    while(a!=0)
    {
        cin>>a;
        tab[i]=a;
        i++;
    }
    int k;
    for(int j=0;j<i;j++)
    {
        k=0;
        while(k<i)
        {
            if(tab[k]<tab[k+1])
                swap(tab[k],tab[k+1]);
            k++;
        }
    }
    for(int j=0;j<10;j++)
    {
        cout<<tab[j]<<" ";
    }
}
