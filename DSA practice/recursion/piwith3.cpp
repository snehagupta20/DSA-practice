#include <iostream>
#include <string>
using namespace std;
void exchange(string a)
{
    if(a.find("pi")==-1)
    {
        cout<<a;
        return;
    }
    int b=a.find("pi");
    a.erase(b,2);
    a.insert(b,"3.14");
    exchange(a);
}
int main()
{
    string c;
    cin>>c;
    exchange(c);
    return 0;
}