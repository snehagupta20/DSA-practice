#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>>ans;
void permute(vector<int> a, int index)
{
    if(index==a.size())
    {
        ans.push_back(a);
        return;
    }
    for(int i=index;i<a.size();i++)
    {
        swap(a[i],a[index]);
        permute(a,index+1);
        swap(a[i],a[index]);
    }
}
int main()
{
    int n;
    cin>>n;
    vector <int> a(n);
    for(auto &i:a)
    {
        cin>>i;
    }
    permute(a,0);
    cout<<endl;
    for(auto i:ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}