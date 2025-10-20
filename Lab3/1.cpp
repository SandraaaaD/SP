//finki
#include <iostream>
using namespace std;
int main()
{
    int br_student,vreme_cekanje,h,min;
    cin>>br_student;
    if(br_student<=60)
    {
        if(br_student<=24)
            vreme_cekanje=br_student*5;
        else if(br_student>24 && br_student<=36)
            vreme_cekanje=br_student*5+30;
        else if(br_student>36 && br_student<=60)
            vreme_cekanje=br_student*5+30+30;
        h=vreme_cekanje/60;
        min=vreme_cekanje%60;
        cout<<h<<" casa i "<<min<<" minuti";
    }
    else
        cout<<"Nema da stigni na red";
    return 0;
}
