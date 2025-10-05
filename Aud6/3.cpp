#include <iostream>
using namespace std;

int br_deliteli(int broj)
{
    int brojac=0;
    for(int i=2;i<broj;i++)
    {
        if(broj%i==0)
        {
            brojac++;
        }
    }
    return brojac;
}
int main()
{
    int n,soodveten,razlika;
    cin>>n;
    for(int p=n+1; ;p++)
    {
        if(br_deliteli(p)==0)
        {
            soodveten=p;
            break;
        }
    }
    cout<<soodveten<<endl;
    razlika=soodveten-n;
    cout<<razlika;
}
