// Reverse the array

#include<bits/stdc++.h>
using namespace std;
// Method 1
void Reverse1(int arr[],int n)  //Time_Complexity-O(n) ,  Aux-space-O(1)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
// Method 2
void Reverse2(int arr[],int n) //Time_Complexity-O(n) ,  Aux-space-O(1)
{
    reverse(arr,arr+n);
}
void Display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
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
   Reverse1(arr,n);
   Display(arr,n);
}