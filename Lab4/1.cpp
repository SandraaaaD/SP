//interval
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    float brojac=0.0,brojac1=0.0;
    cin>>a>>b;
    for(int i=a+1;i<=b;i++)
    {
        if(i%2==0 && i%7==0)
        {
            cout<<i<<endl;
            brojac++;
        }

        if(i%2!=0 && i%3!=0)
        {
            cout<<i<<endl;
            brojac++;
        }
        brojac1++;
    }
    if(brojac==0)
        cout<<0;
    else
        cout<<(brojac/brojac1)*100<<"%"<<endl;
    return 0;
}
