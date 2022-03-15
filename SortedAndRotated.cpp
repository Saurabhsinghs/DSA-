#include<bits/stdc++.h>
using namespace std;
bool SortedAndRotated(int arr[],int n)
{
    // in this question actually i intialize a two var x and y and compare in array 
    // if array is sorted and rotated after traversal complete one of the var value is 1 then we say that array is sorted  
    // if both var value is grater then 1 then we can say array is not sorted
    int x=0,y=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
         x++;
         else
         y++;
    }
    if(x==1 || y==1)
    {
        // This is checked for Array is Rotated or not
        // if array is sorted then only one of var x is incremented other is not
       if(arr[n-1]<arr[0])
       x++;
       else
       y++;       
    }
    if(x==1 || y==1)
    return true;
    else
    return false;

}
int main()
{
    int n= 4;
    int arr[] = {3,4,1,2};
    cout<<SortedAndRotated(arr,n);
}