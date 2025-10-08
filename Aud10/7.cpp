#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void filter(char a[])
{
    for(int i=0;i< strlen(a);i++)
    {
        if(isalpha(a[i]))
        {
            if(islower(a[i]))
                a[i]=toupper(a[i]);
            else if(isupper(a[i]))
                a[i]=tolower(a[i]);
        }
        else
        {
            for (int j=i;j<strlen(a);j++)
            {
                a[j]=a[j+1];
            }
            i--;
        }
    }
}
int main()
{
    char a[101];
    cin.getline(a,101);

    filter(a);

    cout<<a;
}
