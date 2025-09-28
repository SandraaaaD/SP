#include <iostream>
using namespace std;
int main()
{
    int x,ocenka;
    cin>>x;
    if(x<0)
        cout<<"Vnesete pozitiven broj";
    else
    {
        if(x>=0 && x<=50)
            cout<<"5ka";
        else if(x>50 && x<=60)
            cout<<"6ka";
        else if(x>60 && x<=70)
            cout<<"7ka";
        else if(x>70 && x<=80)
            cout<<"8ka";
        else if(x>80 && x<=90)
            cout<<"9ka";
        else if(x>90 && x<=100)
            cout<<"10ka";
    }
    if(x>50 && x<100)
    {
        int pc=x%10;
        if(pc>0 && pc<=3)
            cout<<"-";
        else if(pc>3 && pc<=7)
            cout<<" ";
        else if(pc>7 || pc==0)
            cout<<"+";
    }
    return 0;
}
