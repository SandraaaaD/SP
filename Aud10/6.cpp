#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
    char a[100];
    cin.getline(a,101);
    int brojac_bukvi=0,brojac_cifri=0,brojac_znaci=0;
    for(int i=0;i< strlen(a);i++)
    {
        if(isalpha(a[i]))
            brojac_bukvi++;
        else if(isdigit(a[i]))
            brojac_cifri++;
        else
            brojac_znaci++;
    }
    if(brojac_cifri!=0 && brojac_znaci!=0 && brojac_bukvi!=0) //!= ili >
        cout<<"da";
    else
        cout<<"ne";
    return 0;
}
