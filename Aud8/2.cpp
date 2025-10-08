#include <iostream>
using namespace std;
int main()
{
    int a[100][100],i,j,redovi,koloni,max,min,razlika;
    cin>>redovi>>koloni;
    for(i=0;i<redovi;i++)
    {
        for(j=0;j<koloni;j++)
            cin>>a[i][j];
    }

    min=max=a[0][0];
    for(i=0;i<redovi;i++)
    {
        for(j=0;j<koloni;j++)
        {
            if(a[i][j]>0)
                max=a[i][j];
            else if(a[i][j]<0)
                min=a[i][j];
        }
    }
    razlika=max-min;
    for(i=0;i<redovi;i++)
    {
        for(j=0;j<koloni;j++)
        {
            if(i==j)
                a[i][j]=razlika;
        }
    }

    for(i=0;i<redovi;i++)
    {
        for(j=0;j<koloni;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}


