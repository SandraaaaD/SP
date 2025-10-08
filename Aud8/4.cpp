#include <iostream>
using namespace std;
int main()
{
    int a[100][100],i,j,redovi,koloni,brojac=0;
    cin>>redovi>>koloni;
    for(i=0;i<redovi;i++)
    {
        for(j=0;j<koloni;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=1;i<redovi-1;i++)
    {
        for(j=1;j<koloni-1;j++)
        {
            if (a[i][j] == 1 && a[i - 1][j]==1 && a[i + 1][j]==1 &&
                a[i][j - 1]==1 && a[i][j + 1]==1)
                brojac++;
        }
    }
    cout<<brojac;
    return 0;
}
