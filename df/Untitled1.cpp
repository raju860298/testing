#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<char,int> a,pair<char,int> b)
{
    if(a.second==b.second)
    return a.first>b.first;
    return a.second<b.second;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        map<char,int> m;
        set<char> s1;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
            s1.insert(s[i]);
        }
        map<char,int>::iterator itr;
        vector<pair<char,int> >v;
        for(itr=m.begin();itr!=m.end();itr++)
        {
            v.push_back(make_pair(itr->first,itr->second));
        }
        sort(v.begin(),v.end(),cmp);
        vector< pair<char, int> >::iterator it;
        for(int i=25;i>=0;i--)
        {
            if(s1.find(('a'+i))==s1.end())
            {
                cout<<char('a'+i)<<" ";
            }
        }
        for(int i=0;i<v.size();i++)
        {
        	cout<<v[i].first<<" ";
		}
        
        
        
        
    }
}
