/*#include <iostream>
using namespace std;
int main()
{
    int i,a[4],b[4];
    for(i=0;i<4;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]!=b[i])
        {
            cout<<"Nizite ne se idetichni"<<endl;
            return 0;
        }
    }
    cout<<"Nizite se identichni"<<endl;
}
*/
#include <iostream>
using namespace std;
int main()
{
    int i,a[100],b[100],golemina_a,golemina_b;
    cout<<"Golemini:"<<endl;
    cin>>golemina_a>>golemina_b;
    if(golemina_a==golemina_b)
    {
        cout<<"Elementi na a:"<<endl;
        for(int j=0;j<golemina_a;j++)
            cin>>a[j];
        cout<<"Elementi na b:"<<endl;
        for(int k=0;k<golemina_b;k++)
            cin>>b[k];
        int brojac=0;
        for(i=0;i<golemina_a;i++) //i golemina_b mozhi seedno(ako se isti isto e to, ako ne itaka ne se identichni)
        {
            if(a[i]!=b[i])
            {
                brojac++;
                break;
            }
        }
        if(brojac==0)
            cout<<"Nizite se identichni";
        else
            cout<<"Nizite ne se identichni";

    }
    else
        cout<<"Nizite ne se identichni";
    return 0;
}
