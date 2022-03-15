#include<bits/stdc++.h>
using namespace std;
int SecondMax(int arr[],int n)
{
    int firstMax=INT16_MIN;
    int SecondMax=INT16_MIN;
    for(int i=0;i<n;i++)
    {
        firstMax=max(firstMax,arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(firstMax!=arr[i])
        {
            SecondMax=max(SecondMax,arr[i]);
        }
    }
    return SecondMax;
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
    cout<<SecondMax(arr,n);
}