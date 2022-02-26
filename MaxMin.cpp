#include<bits/stdc++.h>
using namespace  std;
// Method1 using vector  //Time-O(n),space-O(n)
vector<int>MaxAndMin(int arr[],int n)
{
    vector<int>v;
    int Max=INT16_MIN;
    int Min=INT16_MAX;
    for(int i=0;i<n;i++)
    {
        Max=max(Max,arr[i]);
        Min=min(Min,arr[i]);
    }
    
    v.push_back(Max);
    v.push_back(Min);
    return v;
}
// Method 2  //Time -O(n), space-O(1)
void MaxAndMIn1(int arr[],int n)
{
    int Max=INT16_MIN;
    int Min=INT16_MAX;
    for(int i=0;i<n;i++)
    {
        Max=max(Max,arr[i]);
        Min=min(Min,arr[i]);
    }
    cout<<Max<<" "<<Min<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // MaxAndMin1(arr,n);//for method 2 
    vector<int> ans=MaxAndMin(arr,n);
    for(int i=0;i<ans.size();i++)
    {
       cout<<ans[i]<<" ";
    }
}