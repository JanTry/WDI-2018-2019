#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int N=5;

bool obejscie(bool tab[N][N], int x, int y)
{
    if(x<0 or x>=N or y<0 or y>=N or tab[x][y]==true)
        return 0;
    else{
    tab[x][y]=true;
    bool gotowe=true;
    for(int i=0;i<N;i++)for(int j=0;j<N;j++) if(!tab[i][j]) gotowe=false;
    if(gotowe){
         cout<<x+1<<" "<<y+1<<endl;
        return true;
    }
    if(obejscie(tab, x+2, y+1)){
        cout<<x+1<<" "<<y+1<<endl;
        return true;
    }
    if(obejscie(tab, x+2, y-1)){
          cout<<x+1<<" "<<y+1<<endl;
        return true;
    }
    if(obejscie(tab, x-2, y+1)){
        cout<<x+1<<" "<<y+1<<endl;
        return true;
    }
    if(obejscie(tab, x-2, y-1)){
        cout<<x+1<<" "<<y+1<<endl;
        return true;
    }
    if(obejscie(tab, x+1, y+2)){
        cout<<x+1<<" "<<y+1<<endl;
        return true;
    }
    if(obejscie(tab, x+1, y-1)){
        cout<<x+1<<" "<<y+1<<endl;
        return true;
    }
    if(obejscie(tab, x-1, y+2)){
        cout<<x+1<<" "<<y+1<<endl;
        return true;
    }
    if(obejscie(tab, x-1, y-2)){
        cout<<x+1<<" "<<y+1<<endl;
        return true;
    }
    tab[x][y]=false;
    return false;
    }
}

int main()
{
    bool tab[N][N];
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)tab[i][j]=0;
    if(obejscie(tab, 0, 4)) cout<<endl;
    else
        cout<<"DUPA";
}
