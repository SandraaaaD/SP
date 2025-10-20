//semestar
#include <iostream>
using namespace std;
int main()
{
    double N,M,ocena,predvideni_predmeti,prosek,zbir_oceni,max_prosek,soodveten_semestar=1,odnos,max_odnos;
    int i,j;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        cin>>M;
        zbir_oceni=0;
        for(j=1;j<=M;j++)
        {
            cin>>ocena;
            zbir_oceni+=ocena;
        }
        cin>>predvideni_predmeti;
        prosek=(zbir_oceni/M)*(M/predvideni_predmeti)+(1-M/predvideni_predmeti)*5;
        odnos=(M/predvideni_predmeti)*100.0;
        if(prosek>max_prosek)
        {
            soodveten_semestar=i;
            max_prosek=prosek;
            max_odnos=odnos;
        }
    }
    cout<<soodveten_semestar<<endl;
    cout<<max_prosek<<endl;
    cout<<max_odnos<<"%";
    return 0;
}
