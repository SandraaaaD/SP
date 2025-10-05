#include <iostream>
using namespace std;
int main()
{
    int i,a[100],golemina,temp;
    cin>>golemina;
    for(i=0;i<golemina;i++)
        cin>>a[i];
    temp=a[golemina-1];
    for(i=golemina;i>0;i--)
        a[i]=a[i-1];
    a[0]=temp;
    for(i=0;i<golemina;i++)
        cout<<a[i];
    return 0;
}
