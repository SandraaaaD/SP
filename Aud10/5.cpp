#include <iostream>
#include <cstring>
using namespace std;

void palindrom(char a[])
{
    int len= strlen(a);
    bool tochnost=true;
    for(int i=0;i<=len/2;i++)
    {
        if(a[i]!=a[len-1])
        {
            tochnost= false;
            break;

        }
        len--;
    }
    if(tochnost)
        cout<<"da";
    else
        cout<<"ne";
}
//2 i 3 rekurzivni
int palindrom2(char a[],int start,int end)
{
    if(start>=end)
        return 1;
    else
    {
        if(a[start]!=a[end])
            return 0;
        else
            return palindrom2(a,start+1,end-1);
    }
}

int palindrom3(char a[],int i,int len,int lenght)
{
    if(i==lenght/2)
        return 1;
    else
    {
        if(a[i]!=a[len])
            return 0;
        else
            return palindrom3(a,i+1,len-1,lenght);
    }
}



int main()
{
    char a[101];
    cin.getline(a,101);
    int len=strlen(a);
    palindrom(a);
    cout<<endl;
    cout<<palindrom2(a,0,len-1)<<endl;
    cout<<palindrom3(a,0,len-1,len-1);
    return 0;
}
