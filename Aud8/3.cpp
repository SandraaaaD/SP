#include <iostream>
using namespace std;
int main()
{
    int a[100][100],i,j,golemina;
    cin>>golemina;
    for(i=0;i<golemina;i++)
    {
        for(j=0;j<golemina;j++)
            cin>>a[i][j];
    }

    int brojac=0;
    for(i=0;i<golemina;i++) //golemina-1 mozhi
    {
        for(j=0;j<golemina;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                brojac++;
                break;
            }
        }
    }
    if(brojac==0)
        cout<<"Simetrichni";
    else
        cout<<"Asimetrichni";
    return 0;
}
