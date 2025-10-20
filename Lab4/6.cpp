//crtichka
#include <iostream>
using namespace std;
int main()
{
    int x,obratenx=0,cifra,brojac_cifri=0;
    char znak;
    cin>>znak;
    cin>>x;
    for(int i=x;i>0;i/=10)
    {
        cifra=i%10;
        obratenx=obratenx*10+cifra;
    }
    for(int j=obratenx;j>0;j/=10)
    {
        brojac_cifri++;   //mozhev da go vmetnam i gore
    }
    for(int a=0;a<brojac_cifri;a++)
    {

        if(a%2==0)
            cout<<znak;
        else if(a%2!=0)
        {
            cifra=x%10;    //go zemam x za da go dobijam prevrteno poshto od nazad gi zema na xi gi redi napred
            cout<<cifra;
        }
        x/=10;
    }
    return 0;
}
