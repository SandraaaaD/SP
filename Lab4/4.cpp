//palindrom
#include <iostream>
using namespace std;
int main()
{
    int pocetok,temp,kraj,obraten,cifra,max,min;
    cin>>pocetok>>kraj;
    for(int i=pocetok;i<=kraj;i++)
    {
        temp=i;
        obraten=0;
        while(temp>0) {
            cifra=temp%10;
            obraten=obraten*10+cifra;
            temp/=10;
        }

        if(obraten==i)
        {
            max=i;
            if(i>=max)
                max=i;
            min=i;
            if(i<=min)
                min=i;
        }
    }
    cout<<min<<endl;
    cout<<max<<endl;
    return 0;
}
