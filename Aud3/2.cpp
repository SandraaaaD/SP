#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"Tochkata lezhi ";
    if(x>0)
    {
        cout<<"vo ";
        if(y>0)
            cout<<"Kvadrant 1";
        else if(y<0)
            cout<<"Kvadrant 4";
        else
            cout<<"na pozitivniot del na x oska";
    }
    else if(x<0)
    {
        cout<<"vo ";
        if(y>0)
            cout<<"Kvadrant 2";
        else if(y<0)
            cout<<"Kvadrant 3";
        else
            cout<<"na negativniot del na x oska";
    }
    else if(x==0)
    {
        cout<<"na ";
        if(y>0)
            cout<<"pozitivniot del na y oska";
        else if(y<0)
            cout<<"negativniot del na y oska";
        else
            cout<<"Koordinaten pochetok";
    }
    return 0;
}



// #include <iostream>
//     using namespace std;
    
//     int main () {
//             float x, y;
//             cout<<"Vnesi koordinati"<<endl;
//             cin>>x>>y;
//             if (x > 0 && y > 0)
//                     cout<<"I kvadrant."<<endl;
//             if (x > 0 && y < 0)
//                     cout<<"IV kvadrant."<<endl;
//             if (x < 0 && y > 0)
//                     cout<<"II kvadrant."<<endl;
//             if (x < 0 && y < 0)
//                     cout<<"III kvadrant."<<endl;
//             return 0;
//     }
