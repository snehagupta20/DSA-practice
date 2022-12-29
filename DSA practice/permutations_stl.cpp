#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> ans;
    vector <int> e(n);
    for(auto &i:e)
    {
        cin>>i;
    }
    sort(e.begin(),e.end());
    do
    {
        ans.push_back(e);
    }while(next_permutation(e.begin(),e.end()));
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