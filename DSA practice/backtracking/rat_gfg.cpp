#include <iostream>
using namespace std;
bool issafe(int x, int y,int **arr,int n)
{
    if(x<n && y<n && arr[x][y]==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool ratinmaze(int **arr,int x , int y , int **sol,int n)
{
    if(x==n-1 && y==n-1)
    {
        sol[x][y]=1;
        return true;
    }
    if(issafe(x,y,arr,n))
    {
        sol[x][y]=1;
        if(ratinmaze(arr,x+1,y,sol,n))
        {
            return true;
        }
        else if(ratinmaze(arr,x,y+1,sol,n))
        {
            return true;
        }
        else
        {
            sol[x][y]=0;
            return false;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int **arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int **sol=new int*[n];
    for(int i=0;i<n;i++)
    {
        sol[i]=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sol[i][j]=0;
        }
    }
    cout<<endl;
    ratinmaze(arr,0,0,sol,n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }
}