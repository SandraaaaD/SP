#include <iostream>
using namespace std;
int main()
{
    int i,a[100],golemina,brojac_r=0,brojac_o=0;
    cin>>golemina;
    for(i=0;i<golemina;i++)
        cin>>a[i];
    for(i=0;i<golemina-1;i++)
    {
        if(a[i]>=a[i+1])
            brojac_r++;
    }
    for(i=0;i<golemina-1;i++)
    {
        if(a[i]<=a[i+1])
            brojac_o++;
    }
    if(brojac_r==0)
        cout<<"Nizata e rastechka";
    else if(brojac_o==0)
        cout<<"Nizata e opagjacka";
    else
        cout<<"Ni rastecka,ni opagjacka";
    return 0;

}
