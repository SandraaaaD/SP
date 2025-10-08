#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int dolzhina(char a[]) //nema smisla
{
    int brojac=0;
    for(int i=0;i< strlen(a);i++) //nema smisla ova
        brojac++;
    return brojac;
}
int main()
{
    char a[101];
    cin.getline(a,101);
    cout<<strlen(a)<<endl;
    cout<<dolzhina(a);
    return 0;
}
