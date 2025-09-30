#include <iostream>
using namespace std;
int main()
{
    int cifra1,dr_cifri,cifra,suma;
    for(int i=1000;i<=9999;i++)
    {
        cifra1=i/1000;
        dr_cifri=i%1000;
        suma=0;
        while(dr_cifri>0)
        {
            cifra=dr_cifri%10;
            suma+=cifra;
            dr_cifri/=10;
        }
        if(suma==cifra1)
            cout<<i<<" ";
    }
    return 0;
}
