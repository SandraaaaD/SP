//kino
#include <iostream>
using namespace std;
int main()
{
    int kolichina_pukanki,kolichina_pijaloci,visa_card;
    double cena=800;
    char golemina_pukanki;
    string zhanr,vid_pijalok,den;
    cin>>zhanr>>golemina_pukanki>>kolichina_pukanki>>vid_pijalok>>kolichina_pijaloci>>den>>visa_card;

    if(zhanr=="komedija")
        cena+=4*20;
    else if(zhanr=="akcija")
        cena+=4*40;
    else if(zhanr=="romansa")
        cena+=4*30;

    if(den=="sreda" && visa_card==1)
        cena-=cena*0.5;

    switch (golemina_pukanki) {
        case 'S':
            cena+= 100*kolichina_pukanki;
            break;
        case 'M':
            cena+= 150*kolichina_pukanki;
            break;
        case 'L':
            cena+= 200*kolichina_pukanki;
            break;
        default:
            cout<<"Nepostoj takva golemina";
    }

    if(vid_pijalok=="voda")
        cena+=20*kolichina_pijaloci;
    else if(vid_pijalok=="Fanta" || vid_pijalok=="Coca Cola" || vid_pijalok=="Sprite")
        cena+=100*kolichina_pijaloci;
    else if(vid_pijalok=="IceTea")
        cena+=120*kolichina_pijaloci;

    cout<<cena;
    return 0;
}
