//x
#include <iostream>
using namespace std;
int main()
{
    int x,broj,brojac_x=0,brojac_broj;
    cin>>x;
    for(int i=x;i>0;i/=10)
        brojac_x++;
    while(cin>>broj) {
        brojac_broj = 0;
        for (int j = broj; j > 0; j /= 10)
            brojac_broj++;
        if(brojac_broj==brojac_x)
            cout<<broj<<endl;
    }
    return 0;
}
