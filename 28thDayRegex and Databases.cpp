/*
HackerRank amazing 30 days of code challenge. 28th day problem. One of the best problem of the series.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>name;
    regex exp(".+@gmail\\.com$");
    for(int i=0;i<n;i++)
    {
        string fname;
        string email;
        cin>>fname;
        cin>>email;
        if(regex_match(email, exp))
        name.push_back(fname);
    }
    sort(name.begin(),name.end());
    for(int i=0;i<name.size();i++)
    cout<<name[i]<<endl;
    return 0;
}
