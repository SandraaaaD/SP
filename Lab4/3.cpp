//zbir cifri paren br max
#include <iostream>
using namespace std;
int main()
{
    int n,broj,temp,cifra,zbir_cifri,max;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>broj;
        zbir_cifri=0;
        temp=broj;
        while(temp>0)
        {
            cifra=temp%10;
            zbir_cifri+=cifra;
            temp/=10;
        }
        if(zbir_cifri%2==0)
        {
            max=broj;
            if(broj>=max)
                max=broj;
        }
    }
    cout<<max;
    return 0;
}
