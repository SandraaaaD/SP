//cifri
#include <iostream> //bez funkcii
using namespace std;

int appears(int first,int second)
{
    int brojac,cifra_1,cifra_2;
    bool tochnost=true;
    while(first>0)
    {
        cifra_1=first%10;
        brojac=0;
        while(second>0)
        {
            cifra_2=second%10;
            if(cifra_1==cifra_2)
            {
                brojac++;
                break;
            }
            second/=10;
        }
        if(brojac==0)
        {
            tochnost=false;
            break;
        }
        first/=10;
    }
    return tochnost;
}

int main()
{
    int a,b,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(appears(a,b)==true)
            cout<<"DA";
        else
            cout<<"NE";
    }
    return 0;
}
