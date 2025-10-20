//odanochuvanje
#include <iostream>
using namespace std;
int main()
{
    double procent0,prag1,procent1,prag2,procent2,iznos,rezultat;
    cin>>procent0>>prag1>>procent1>>prag2>>procent2>>iznos;
    rezultat=procent0/100.0*prag1+procent1/100.0*(prag2-prag1)+procent2/100.0*(iznos-prag1-(prag2-prag1));
    cout<<rezultat;
    return 0;
}
