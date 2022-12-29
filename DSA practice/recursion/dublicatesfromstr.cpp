#include <iostream>
#include <string>
using namespace std;
int main()
{
    string n;
    cin>>n;
    for(int i=0;i<n.length();i++)
    {
        for(int j=0;j<n.length();j++)
        {
            if(j!=i)
            {
                if(n[i]==n[j])
                {
                    n.erase(j,1);
                }
            }
        }
    }
    cout<<n;
}