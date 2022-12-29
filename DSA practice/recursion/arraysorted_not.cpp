#include <iostream>
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
    int max=arr[0],count=0;
    for(int i=1;i<n;i++)
    {
        if(max<=arr[i])
        {
            max=arr[i];
            count++;
        }
        else
        {
            cout<<"array is not sorted";
            break;
        }

    }
    if(count==n-1)
    {
        cout<<"array is sorted";
    }
}