#include <iostream>
using namespace std;
int add(int num1, int num2)
{
    return num1+num2;
}
int main()
{
    int a=2,b=3;
    int sum=add(a,b);
    cout<<sum<<endl;
}