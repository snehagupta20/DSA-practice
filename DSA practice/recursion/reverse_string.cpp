#include <bits/stdc++.h>
using namespace std;
void reverse(string b,int i,int j)
{
    if(i<=j)
    {
        cout<<b;
        return;
    }
    swap(b[i],b[j]);
    reverse(b,i-1,j+1);
}
int main()
{
    string a;
    cin>>a;
    reverse(a,a.length()-1,0);
}