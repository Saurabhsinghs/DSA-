#include<bits/stdc++.h>
using namespace std;
void Union(int arr1[],int arr2[],int n,int m)
{
    set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
      s.insert(arr2[i]);
    }
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
}
void Intersection(int arr1[],int arr2[],int n,int m)
{
    set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
        if(s.find(arr2[i])!=s.end())
        {
            cout<<arr2[i]<<" ";
        }
    }
}
int main()
{
    int arr1[]={10,2,3,11,4,5};
    int arr2[]={10,2,5,3,6,7};
    Union(arr1,arr2,6,6);
    Intersection(arr1,arr2,6,6);
}