#include <iostream>
using namespace std;
bool issafe(int** arr,int x,int y, int n)
{
    //checking if there's alredy a queen in the column or not
    for(int row=0;row<x;row++)
    {
        if(arr[row][y]==1)
        {
            return false;
        }
    }
    /*checking diagnoally
        two iterators:
            diagnolly left: column--;row--
            diagnolly right: column--;row++
    */
    int row=x,col=y;
    //checking weather after decrement, did the row ad column become 0?

    //left diagnol
    while(row>=0 && col>=0)
    {
        if(arr[row][col]==1)
        {
            return false;
        }
        row--;
        col--;
    }

    //right diagnol
    while(row>=0 && col<n) //n is the order of the matrix
    {
        if(arr[row][col]==1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}
//main function, recursivelly calling and backtracking
bool nqueen(int **arr,int x,int n)
{
    //base conditions: placed n queens
    if(x>=n)
    {
        return true;
    }
    //is position safe?
    for(int col=0;col<n;col++)
    {
        if(issafe(arr,x,col,n))
        {
            arr[x][col]=1;

            //checking for next row
            if(nqueen(arr,x+1,n))
            {
                return true;
            }

            //if false
            arr[x][col]=0; //backtracking
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
            arr[i][j]=0;
        }
    }
    
    if(nqueen(arr,0,n))
    {
       for(int i=0;i<n;i++)
       {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
       } 
    }
    return 0;
}