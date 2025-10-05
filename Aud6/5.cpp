#include <iostream>
using namespace std;
int main()
{
    int i,m,j,brojac_prost1,brojac_prost2,brojac_kraj=0;
    for(i=1;i<1000;i++)
    {
        brojac_prost1=0;
        brojac_prost2=0;
        for(m=2;m<i;m++)
        {
            if(i%m==0)
                brojac_prost1++;
        }
        if(brojac_prost1==0)
        {
            for(j=2;j<(i+2);j++)
            {
                if((i+2)%j==0)
                    brojac_prost2++;
            }
            if(brojac_prost2==0)
            {
                cout<<i<<" "<<(i+2)<<endl;
                brojac_kraj++;
            }
        }
    }
    cout<<brojac_kraj;
    return 0;
}
