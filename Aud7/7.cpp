#include <iostream>
using namespace std;
int main()
{
    int i,a[100],golemina;
    cin>>golemina;
    for(i=0;i<golemina;i++)
        cin>>a[i];

    for(i=0;i<golemina;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                for(int k=i;k<golemina;k++)
                    a[k]=a[k+1];
                i--;
                golemina--;
            }
        }
    }

    for(i=0;i<golemina;i++)
        cout<<a[i]<<" ";
    return 0;
}
