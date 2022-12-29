#include <iostream>
using namespace std;
int factorial(int b)
{
    if(b==1)
    {
        return 1;
    }
    int prevfactorial=factorial(b-1);
    return b*prevfactorial;
}
int main()
{
    int a;
    cin>>a;
    cout<<factorial(a);
}