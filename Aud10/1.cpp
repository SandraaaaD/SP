#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int count_char(char a[],char x)
{
    int brojac=0;
    for(int i=0;i< strlen(a);i++)
    {
        if(a[i]==x)
            brojac++;
    }
    return brojac;
}

int count2 (char * str, char c){
    int brojac = 0;
    while (*str){
        if (*str == c) {
            brojac++;
        }
        str++;
    }
    return brojac;
}


int main()
{
    char a[101],x;
    cin.getline(a,101);
    cin>>x;
    /*
    for(int i=0;i< strlen(a);i++)
        cout<<a[i];
    cout<<endl;
*/
    cout<<a<<endl;
    cout<<count2(a,x);
    return 0;
}
