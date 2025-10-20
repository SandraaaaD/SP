//
#include <iostream>
using namespace std;
int main()
{
    int x1,x2,x3,x4,x5,vkpoeni,ocenka;
    cin>>x1>>x2>>x3>>x4>>x5;
    vkpoeni=x1+x2+x3+x4+x5;
    if(vkpoeni<=50)
        cout<<"Predmetot ne e polozhen";
    else
    {
        if(vkpoeni>50 && vkpoeni<=60)
            ocenka=6;
        else if(vkpoeni>60 && vkpoeni<=70)
            ocenka=7;
        else if(vkpoeni>70 && vkpoeni<=80)
            ocenka=8;
        else if(vkpoeni>80 && vkpoeni<=90)
            ocenka=9;
        else if(vkpoeni>90 && vkpoeni<=100)
            ocenka=10;
        cout<<"Ocenka: "<<ocenka<<", poeni: "<<vkpoeni<<endl;
        if(vkpoeni>50 && vkpoeni<=99)
        {
            if((vkpoeni%10)==0)
                cout<<"Ima uslov za povisoka ocenka";
            else
                cout<<"Nema uslov za povisoka ocenka";
        }
    }
    return 0;
}
