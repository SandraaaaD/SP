#include <iostream>
using namespace std;
int main()
{
    int i,a,cifra,zbir_cifri,brojac_1_prost,brojac_prost,temp,brojac_kraj=0;
    for(i=1;i<1000;i++)
    {
        temp=i;
        brojac_1_prost=0;
        for(a=2;a<temp;a++)
        {
            if(temp%2==0)
                brojac_1_prost++;
        }
        if(brojac_1_prost==0)
        {
            zbir_cifri=0;
            for(int m=i;m>0;m/=10)
            {
                cifra=m%10;
                zbir_cifri+=cifra;
            }
            brojac_prost=0;
            for(int b=2;b<zbir_cifri;b++)
            {
                if(zbir_cifri%b==0)
                    brojac_prost++;
            }
            if(brojac_prost==0)
            {
                cout<<i<<" ";
                brojac_kraj++;
            }
        }
    }
    cout<<endl;
    cout<<brojac_kraj;
    return 0;
}
