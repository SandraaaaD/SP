//m-p-n
#include <iostream>
using namespace std;

int countOccurence(int number, int digit)
{
    int brojac=0;
    while(number>0)
    {
        int cifra=number%10;
        if(digit==cifra)
            brojac++;
        number/=10;
    }
    return brojac;
}

int main()
{
    int m,n,p,brojac_kraj=0;
    cin>>m>>n>>p;
    for(int i=m+1; ;i++)
    {
        int brojac=countOccurence(i,n);
        if(brojac==p)
        {
            cout<<i<<endl;
            brojac_kraj++;
        }
        if(brojac_kraj>=10)
            break;
    }
    return 0;
}
