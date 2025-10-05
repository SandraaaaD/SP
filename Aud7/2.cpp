#include <iostream>
using namespace std;
int main()
{
    int i,a[100],golemina,zbir_parni=0,zbir_neparni=0,brojac_parni=0,brojac_neparni=0;
    cin>>golemina;
    for(i=0;i<golemina;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            zbir_parni+=a[i];
            brojac_parni++;
        }
        else
        {
            zbir_neparni+=a[i];
            brojac_neparni++;
        }
    }
    cout<<"Zbir parni: "<<zbir_parni<<endl;
    cout<<"Zbir neparni: "<<zbir_neparni<<endl;
    cout<<"Razlika: "<<(float)brojac_parni/brojac_neparni<<endl;
    return 0;
}
