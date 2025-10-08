#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[100];
    cin.getline(a,101);
    int pochetok,dolzhina;
    cin>>pochetok>>dolzhina;

    for(int i=pochetok;i<pochetok+dolzhina && i<strlen(a);i++) //za da ne izlezi od granicite
    {
        cout<<a[i];
    }
    cout<<endl;

    char b[101];
    strncpy(b, a+pochetok, dolzhina);
    cout<<b<<endl;
    cout<<a+pochetok;
    return 0;
}
