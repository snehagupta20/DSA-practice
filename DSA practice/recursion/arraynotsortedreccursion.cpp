#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number of elements in an array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" element";
        cin>>arr[i];
    }
    checksort(arr)
}