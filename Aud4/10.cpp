#include <iostream>
using namespace std;
int main()
{
    int broj,brojac=0,mom_br,preth_br,max_zbir=-10000,pozicija=0;
    while(cin>>broj)
    {
        brojac+=1;
        mom_br=broj;
        if (brojac>1)
        {
            int zbir=mom_br+preth_br;
            if (zbir>max_zbir)
            {
                max_zbir=zbir;
                pozicija=brojac;
            }
        }
        preth_br=broj;
    }
    cout<<max_zbir<<endl;
    cout<<pozicija-1<<" "<<pozicija;
    return 0;
}
