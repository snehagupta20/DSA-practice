//through reccurssion
#include <iostream>
using namespace std;
void lastocc(int *arr,int n, int b)
{
    if(n<0)
    {
        cout<<"no such num present"<<endl;
    }
    if(arr[n-1]==b)
    {
        cout<< n-1;
        cout<<endl;
    }
    else
    {
        lastocc(arr,n-1,b);
    }

};
void firstocc(int *arr,int n,int b,int i)
{
    if(i==n)
    {
        cout<<"no such no present"<<endl;
    }
    if(arr[i]==b)
    {
        cout<< i;
        cout<<endl;
    }
    else
    {
        firstocc(arr,n,b,i+1);
    }
};
int main()
{
    int n,b;  
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"number find";
    cin>>b;
    firstocc(arr,n,b,0);
    cout<<endl;
    lastocc(arr,n,b);
    cout<<endl;
}