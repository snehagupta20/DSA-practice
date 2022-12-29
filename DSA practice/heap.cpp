//size is not fixed, stack's size is fixed
#include <iostream>
using namespace std;
int main()
{
    int a=10;  //stored in stack
    int *p=new int();  //new opwrator used to store a memory in heap
    *p=10;   //p pointing towards memory address in heap; value 10 stored in the memory address ((allocatted memory in heap; can access from anywhere since now we know its address. since now we access this from its address, we can access the "10" from anywhere))
    delete(p); //have to manually deallocate in heap; dangling pointer, points to nothing
    p=new int[4]; //pointer points to array
    delete[]p;
    p=NULL; //now the pointer does not points towards any specific position
}