#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int arr[26];
    for(int i=0;i<26;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<str.length();i++)
    {
        arr[str[i]-'a']++;
    }
    char ans='a';
    int occ=0;
    for(int i=0;i<str.length();i++)
    {
        if(arr[i]>occ)
        {
            occ=arr[i];
            ans=ans+i;
        }

    }
    cout<<occ<<endl<<ans;
}