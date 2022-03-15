#include<bits/stdc++.h>
using namespace std;
bool Mycomp(pair<int,int>p1,pair<int,int>p2)
{
    return p1.second>p2.second;
}
void PrintSortedBymarks(int roll[],int marks[],int n)
{
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        v.push_back({roll[i],marks[i]});
    }
    sort(v.begin(),v.end(),Mycomp);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
int main()
{
    int roll[]={101,104,102,105};
    int marks[]={70,80,40,50};
    PrintSortedBymarks(roll,marks,4);
}