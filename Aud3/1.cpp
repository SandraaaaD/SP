#include <iostream>
using namespace std;
int main()
{
    char x;
    cout<<"Vnesi znak";
    cin>>x;
    if((x>='a')&&(x<='z'))
        cout<<"mala bukva";
    else if((x>='A')&&(x<='Z'))
        cout<<"golema bukva";
    else if((x>='0')&&(x<='9'))
        cout<<"broj";
    else
        cout<<"specijalen znak";
    return 0;
}
