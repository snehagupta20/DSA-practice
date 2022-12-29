#include <iostream>
using namespace std;
void increment(int *b)
{
    *b++;
}
int main()
{
   int a=2;
   increment(&a);
   cout<<a;
   return 0;
}     