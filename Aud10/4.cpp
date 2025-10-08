#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char big[101],small[101];
    cin.getline(big,101);
    cin.getline(small,101);

    for(int i=0;i<= strlen(big)-strlen(small);i++)
    {
        if(big[i]==small[0])
        {
            bool tochnost=true;
            for(int j=0;j< strlen(small);j++)
            {
                if(big[i+j]!=small[j])
                {
                    tochnost=false;
                    break;
                }
            }
            if(tochnost)
            {
                cout<<"da";
                return 0;
            }
        }
    }
    cout<<"ne";

    if(strstr(big,small))
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}
