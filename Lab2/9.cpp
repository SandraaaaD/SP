#include <iostream>
using namespace std;
int main()
{
    float jab,mal,ban,suma;
    bool k;
    cin>>jab,mal,ban,k;
    suma=(jab/100)*30+(mal/100)*50+(ban/100)*40;
    if(jab>=500)
        suma+=(jab/100)*30*0.5;
    else if(jab=200)
        suma+=(jab/100)*30*0.7;
    else
        suma+=(jab/100)*30;

    if(mal>=500)
        suma+=(mal/100)*50*0.5;
    else if(mal=200)
        suma+=(mal/100)*50*0.7;
    else
        suma+=(mal/100)*50;

    if(ban>=500)
        suma+=(ban/100)*40*0.5;
    else if(ban=200)
        suma+=(ban/100)*40*0.7;
    else
        suma+=(ban/100)*40;

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

}
