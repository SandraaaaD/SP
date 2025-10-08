#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void otstranuvanje(char a[])
{
    for(int i=0;i<strlen(a);i++)
    {
        if(isspace(a[i]))
        {
            for(int j=i;j< strlen(a);j++)
                a[j]=a[j+1];
            i--;
        }
    }
}

int main()
{
    char a[101];
    cin.getline(a,101);

    otstranuvanje(a);
    cout<<a;
    cout<<1; //za da vidam dali gi brishi i na krajot
    return 0;
}
