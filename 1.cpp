#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,string>mp;
    string key,value;
    int n;
    cin>>n;
    while(n--)
    {
    cin>>key>>value;
    mp[key]=value;
    }
    
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}