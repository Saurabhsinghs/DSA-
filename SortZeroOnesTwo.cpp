#include<bits/stdc++.h>
using namespace std;
void SortZeroOnesTwo(int arr[],int n)
{
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high)
    {
        switch(arr[mid])
        {
            case 0:swap(arr[low],arr[mid]);
            low++;
            mid++;
            break;
            case 1:mid++;
            break;
            case 2: swap(arr[mid],arr[high]);
            high--;
            break;
        }
    }
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
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    SortZeroOnesTwo(arr,12);
    Display(arr,12);
}