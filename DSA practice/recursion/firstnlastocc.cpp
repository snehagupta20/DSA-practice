//without reccurion
#include <iostream>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the int"<<endl;
    cin>>a;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            cout<<a<<"= start: "<<i<<"; end: ";
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==a)
        {
            cout<<i;
            break;
        }
    }
}