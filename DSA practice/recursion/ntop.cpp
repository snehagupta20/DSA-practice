#include <iostream>
using namespace std;
int ntop(int b,int p)
{
    if(p==0)
    {
        return 1;
    }
    int prevpower=ntop(b,p-1);
    return b*prevpower;
}
int main()
{
    int a,p;
    cin>>a >> p;
    cout<<ntop(a,p);
}
