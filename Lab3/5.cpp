//ddv
#include <iostream>
using namespace std;
int main()
{
    float iznos,danok,vkdanok=0;
    char tip;
    for(int i=1;i<=3;i++)
    {
        cin>>iznos>>tip;
        if(iznos>30000)
            iznos=30000;
        else if(iznos<0)
            continue;
        switch (tip)
        {
            case 'A':
                danok=0.18*iznos;
                break;
            case 'B':
                danok=0.1*iznos;
                break;
            case 'C':
                danok=0.05*iznos;
                break;
            case 'D':
                danok=0.0*iznos;
                break;
            default:
                danok=0.15*iznos;
                break;
        }
        vkdanok+=danok;
    }
    cout<<"Vkupniot danok za trite smetki e: "<<vkdanok<<endl;
    float vkddv=0;
    vkddv=vkdanok*0.15;
    if(vkddv>2100)
        vkddv=2100;
    cout<<"Vkupnoto ddv za trite smetki e: "<<vkddv<<endl;
    return 0;
}
