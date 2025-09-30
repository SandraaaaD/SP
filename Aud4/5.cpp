#include <iostream>
using namespace std;
int main()
{
    int broj,obraten,cifra,from,to,temp;
    cin>>from>>to;
    for(broj=from;broj<=to;broj++)
    {
        temp=broj;
        obraten=0;
        while(temp>0)
        {
            cifra=temp%10;
            obraten=obraten*10+cifra;
            temp/=10;
        }
        if(obraten==broj)
            cout<<broj<<" "<<endl;
    }
    return 0;
}
