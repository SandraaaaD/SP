//palindrom
#include <iostream>
using namespace std;

int reverse(int number)
{
    int obraten=0;
    while(number>0)
    {
        int cifra=number%10;
        obraten=obraten*10+cifra;
        number/=10;
    }
    return obraten;
}

int isPalindrom(int number)
{
    bool rez=false;
    if(number==reverse(number))
        rez=true;
    return rez;
}

int FindLargest(int start,int end)
{
    int max_pal=0;
    for(int i=start;i<=end;i++)
    {
        if(isPalindrom(i)==true)
        {
            if(i>max_pal)
                max_pal=i;
        }
    }
    return max_pal;
}
int main()
{
    int pocetok,kraj;
    cin>>pocetok>>kraj;
    cout<<FindLargest(pocetok,kraj);
    return 0;
}
