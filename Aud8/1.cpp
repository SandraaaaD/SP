#include <iostream>
using namespace std;
int main()
{
    int a[100][100],i,j,redovi,koloni,zbir_n_koloni=0,zbir_p_redici=0,razlika;
    cin>>redovi>>koloni;
    for(i=0;i<redovi;i++)
    {
        for(j=0;j<koloni;j++)
            cin>>a[i][j];
    }
    for(i=0;i<redovi;i++)
    {
        for(j=0;j<koloni;j++)
        {
            if(i%2==0)
                zbir_p_redici+=a[i][j];
            else if(j%2!=0)
                zbir_n_koloni+=a[i][j];
        }
    }
    razlika=zbir_n_koloni-zbir_p_redici;
    cout<<razlika;
    return 0;
}
