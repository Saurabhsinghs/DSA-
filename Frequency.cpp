#include<bits/stdc++.h>
using namespace std;
void Frequency(int arr[],int n)
{
    unordered_map<int,int>h;
    for(int i=0;i<n;i++)
    {
        h[arr[i]]++;
    }
    
    for(int i=0;i<n;i++)
    {
        if(h[arr[i]]!=-1)
        {
            cout<<arr[i]<<":"<<h[arr[i]]<<endl;
            h[arr[i]]=-1;
        }
    }
}
int main()
{
    int arr[]={10,12,10,15,10,20,12,12};
    Frequency(arr,8);
}