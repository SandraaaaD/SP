//carina
#include <iostream>
using namespace std;
int main()
{
    double dmv,vmv,pbb=0,skd=61.5,co2,kco2=0,zashteda,suma_kredit,zashteda_sredstva,meseci_na_isplata,rata=0,mesechen_prihod;
    char gorivo;
    cin>>vmv>>skd>>co2>>gorivo>>zashteda>>zashteda_sredstva>>meseci_na_isplata>>mesechen_prihod;
    if(vmv<10000)
        pbb=0;
    else if(vmv>=10000 && vmv<20000)
        pbb=0.05;
    else if(vmv>=20000 && vmv<30000)
        pbb=0.10;
    else if(vmv>=30000)
        pbb=0.15;

    if(gorivo=='B')
    {
        if(co2>0 && co2<75)
            kco2=5;
        else if(co2<=75)
            kco2=15;
    }
    else if(gorivo=='D')
    {
        if(co2>0 && co2<75)
            kco2=10;
        else if(co2<=75)
            kco2=20;
    }

    dmv=(vmv*pbb)*skd+co2+kco2;
    suma_kredit=dmv+vmv;

    if(zashteda==1)
        suma_kredit-=zashteda_sredstva;
    else if(zashteda==0 && zashteda_sredstva!=0)
        cout<<"greshka";

    if(zashteda_sredstva>suma_kredit)
        cout<<"Ne e potrebno da zema kredit";
    else
    {
        rata=suma_kredit/meseci_na_isplata+(suma_kredit*meseci_na_isplata*0.02);

    }

    if(mesechen_prihod<rata)
        cout<<"Ne mozhe da se podigne kredit"<<endl;
    else
        cout<<"Mesechnata rata za kreditot e: "<<rata*skd;

    return 0;
}
