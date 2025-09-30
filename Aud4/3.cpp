#include <iostream>
using namespace std;
int main()
{
    int x,ost0=0,ost1=0,ost2=0,n=0;
    while(cin>>x)
    {
        if(x%3==0)
            ost0++;
        else if(x%3==1)
            ost1++;
        else if(x%3==2)
            ost2++;
        n+=1;
    }
    cout<<ost0<<" "<<ost1<<" "<<ost2<<" "<<n;
    return 0;
}
