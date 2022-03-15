#include<bits/stdc++.h>
using namespace std;
// Brute Force
int Stock(int arr[],int n)
{
    int maxpro=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            maxpro=max(maxpro,arr[j]-arr[i]);
        }
    }
    return maxpro;
}
// Optimized
int Stock1(int arr[],int n)
{
    int minele=arr[0];
    int maxpro=0;
    for(int i=1;i<n;i++)
    {
        minele=min(minele,arr[i]);
        maxpro=max(maxpro,arr[i]-minele);
    }
    return maxpro;
}
int main()
{
    int arr[]={7,1,5,3,6,4};
    cout<<Stock1(arr,6);
}