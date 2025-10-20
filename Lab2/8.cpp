//
#include <iostream>
using namespace std;
int main()
{
    double jab,mal,ban,cena_jab,cena_mal,cena_ban,suma;
    cin>>jab>>mal>>ban;
    cena_jab=(jab/100)*30;
    cena_mal=(mal/100)*50;
    cena_ban=(ban/100)*40;

    if(jab==200)
        cena_jab=cena_jab-cena_jab*0.3;
    else if(jab>=500)
        cena_jab=cena_jab-cena_jab*0.5;


    if(mal==200)
        cena_mal=cena_mal-cena_mal*0.3;
    else if(mal>=500)
        cena_mal=cena_mal-cena_mal*0.5;


    if(ban==200)
        cena_ban=cena_ban-cena_ban*0.3;
    else if(ban>=500)
        cena_ban=cena_ban-cena_ban*0.5;


    suma=cena_jab+cena_mal+cena_ban;

    bool k;
    cin>>k;
    if(k==0)
        cout<<suma;
    else if(k==1)
    {
        if(suma>140)
        {
            suma-=140;
            cout<<suma;
        }
        else
        {
            suma=0;
            cout<<suma;
        }
    }
    return 0;
}
